/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:08:00 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/11 16:39:42 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int letter;
	letter = 127;// 128 in DEC ->ç
	printf("Test usando mi FT\n");
	if(ft_isascii(letter))
		printf("Si, return: %d\n", letter);
	else
		printf("No, return: %d\n", letter);
	printf("Test usando Ctype.h\n");
	if(isascii(letter))
		printf("Si, return: %d\n", letter);
	else
		printf("No, return: %d\n", letter);
	return (0);
}*/
