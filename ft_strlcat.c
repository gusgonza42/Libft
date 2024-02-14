/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:05:23 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/14 19:02:55 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_pos;

	dest_len = ft_strlen(dest);
	src_pos = 0;
	if (dstsize <= dest_len)
		return (ft_strlen(src) + dstsize);
	while (src[src_pos] && (dest_len + src_pos) < (dstsize - 1))
	{
		dest[dest_len + src_pos] = src[src_pos];
		src_pos++;
	}
	dest[dest_len + src_pos] = '\0';
	return (dest_len + ft_strlen(src));
}
/* //For testing
#include <stdio.h>
#include <string.h>
int main(void) {
	char dest[] ="Hello";
	char src[] = " World!";
	size_t len = 4;
	printf("< - START - >\n");
	printf("dest: '%s'\n", dest);
	printf("src: '%s'\n", src);

	size_t result = ft_strlcat(dest, src, len);
	printf("\nUse ft_strlcat:\n");
	printf("Result: %zu\n", result);
	printf("dest: '%s'\n", dest);
	printf("src: '%s'\n", src);
	return 0;
}
*/
