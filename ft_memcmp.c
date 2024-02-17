/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:35:11 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 18:11:55 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (((unsigned char *)s1)[pos] != ((unsigned char *)s2)[pos])
			return (((unsigned char *)s1)[pos] - ((unsigned char *)s2)[pos]);
		pos++;
	}
	return (0);
}
/* //For testing
#include <stdio.h>

int	main (void)
{
	char	str1[] = "Hello World";
	char	str2[] = "Hello World";
	char	str3[] = "Hello world";

	if (ft_memcmp(str1, str2, 11) == 0)
		printf("str1 & str2 equals\n");
	else
		printf("str1 & str2 diff\n");
	if (ft_memcmp(str1, str3, 11) == 0)
		printf("str1 & str2 equals\n");
	else
		printf("str1 & str2 diff\n");
	return (0);
}
*/
