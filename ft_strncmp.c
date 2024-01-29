/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:56:29 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/22 14:24:24 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0' && s2[pos] != '\0' && n > 0)
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		n--;
		pos++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "hola1";
	char	*s2 = "hola2";
	int	n = 4;
	int r = ft_strncmp(s1, s2, n);
	if (ft_strncmp(s1, s2, n) > 0)
		printf("%dthe first character that does not match has a greateri\n 
		value in ptr1 than in ptr2\n", r);
	else if (ft_strncmp(s1, s2, n) == 0)
		printf("he contents of both strings are equal\n");
	else if (ft_strncmp(s1, s2, n) < 0)
		printf("%d the first character that does not match has a lower \n
		value in str1 than in str2\n", r);
	else
		printf("Yow chat, rarete ^.-");
	

	if (strncmp(s1, s2, n) > 0)
		printf("%d the first character that does not match has a greater\n
		value in ptr1 than in ptr2\n", r);
	else if (strncmp(s1, s2, n) == 0)
		printf("he contents of both strings are equal\n");
	else if (strncmp(s1, s2, n) < 0)
		printf("%d the first character that does not match has a lower value\n
		in str1 than in str2\n", r);
	else
		printf("Yow chat, rarete ^.-");
}*/
