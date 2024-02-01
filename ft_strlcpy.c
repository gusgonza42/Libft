/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:30:29 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/01 13:32:25 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	pos;

	pos = 0;
	if (size > 0)
	{
		while (pos < size - 1 && src[pos] != '\0')
		{
			dest[pos] = src [pos];
			pos++;
		}
		dest[pos] = '\0';
	}
	return (ft_strlen(src));
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "yowchatklk";
	char	str2[] = "yow";
	char	str3[] = "yowchatklk";
	char	str4[] = "yow";
	printf("strlcpy: %ld\n", strlcpy(str, str2, sizeof(str)));
	printf("str: %s\nstr2: %s\n", str, str2);
	printf("ft_strlcpy: %ld\n", ft_strlcpy(str3, str4, sizeof(str3)));
	printf("ft_str: %s\nft_str2: %s\n", str3, str4);
	return (0);
}*/
