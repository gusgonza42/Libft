/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:05:23 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/03 17:40:28 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	pos;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	pos = dest_len;
	if (size <= dest_len)
		return (src_len + size);
	while (src[pos - dest_len] != '\0' && pos < size - 1)
	{
		dest[pos] = src[pos - dest_len];
		pos++;
	}
	dest[pos] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>

int main() {
    char dest[20] = "Hello";
    const char src[] = " World!";
    
    printf("Antes de ft_strlcat:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    size_t result = ft_strlcat(dest, src, 20);

    printf("\nDespués de ft_strlcat:\n");
    printf("dest: %s\n", dest);
    printf("Resultado: %zu\n", result);

    return 0;
}*/
