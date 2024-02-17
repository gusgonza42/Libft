/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:08:00 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 20:26:30 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* //For testing
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
	if(isascii(letter))
		printf("Si, return: %d\n", letter);
	else
		printf("No, return: %d\n", letter);
	return (0);
}*/
