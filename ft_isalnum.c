/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:45:53 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/14 15:48:15 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int c;

	c = '6';
	if (ft_isalnum(c))
		printf("'%c' -> Is alphaNumeric", c);
	else
		printf("'%d'-> Not alphaNumeric", c);
	printf("\nTest original\n");
	if (isalnum(c))
		printf("'%c' -> Is alphaNumeric", c);
	else
		printf("'%d'-> Not alphaNumeric", c);
	return (0);
}*/
