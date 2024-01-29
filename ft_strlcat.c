/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:05:23 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/29 19:16:12 by gusgonza         ###   ########.fr       */
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
	pos = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (src[pos] != '\0' && src_len + pos < dest_len - 1)
	{
		dest[src_len + pos] = src[pos];
		pos++;
	}
	dest[dest_len + pos] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    size_t buffer_size = 15;

    char destination[10] = "Hello, ";
    const char *source = "world!";
    size_t result = ft_strlcat(destination, source, buffer_size);

    // Mostrar el resultado
    printf("Cadena concatenada: %s\n", destination);
    printf("Longitud total: %zu\n", result);

    return 0;
}*/
