/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:40:58 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/13 18:14:47 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main (void)
{	int letterOne;
	int letterTwo;
	letterOne = 91;
	letterTwo = 95;

	printf("Test-1 con mi FT: '%c', '%c'\n", letterOne, letterTwo);
	if (ft_isalpha(letterOne))
		printf("'%c' -> Es un caracter\n", letterOne);
	else
		printf("'%c' -> No es un caracter\n", letterOne);

	printf("Test-2 con mi FT\n");
	if (ft_isalpha(letterTwo))
		printf("'%c' ->Es un caracter\n", letterTwo);
	else
		printf("'%c' ->No es un caracter\n", letterTwo);

	printf("Test-1 con Ctype: ->'%c', ->'%c'\n", letterOne, letterTwo);
	if (isalpha(letterOne))
		printf("'%c' -> Es un caracter\n", letterOne);
	else
		printf("'%c' -> No es un caracter\n", letterOne);
	printf("Test-2 con Ctype.h\n");
	if (isalpha(letterTwo))
		printf("'%c' -> Es un caracter\n", letterTwo);
	else
		printf("'%c' -> No es un caracter\n", letterTwo);
	return (0);
}*/
