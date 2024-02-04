/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:36:43 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/04 15:49:38 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, len);
	ptr[len] = '\0';
	return (ptr);
}
/*#include <stdio.h>

int main(void)
{
    const char *original_string = "Hello, World!";
    char *duplicate_string;

    duplicate_string = ft_strdup(original_string);

    if (duplicate_string != NULL)
    {
        printf("Original String: %s\n", original_string);
        printf("Duplicated String: %s\n", duplicate_string);
        free(duplicate_string);
    }
    else
    {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}*/
