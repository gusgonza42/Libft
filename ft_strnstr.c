/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:44:33 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/03 19:17:16 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	pos_str;
	size_t	pos_find;

	pos_str = 0;
	if (*to_find == '\0' || str == NULL)
		return ((char *)str);
	while (str[pos_str] != '\0' && pos_str < len)
	{
		pos_find = 0;
		while (to_find[pos_find] == str[pos_str + pos_find]
			&& (pos_str + pos_find) < len)
		{
			if (to_find[pos_find + 1] == '\0')
				return ((char *)&str[pos_str]);
			pos_find++;
		}
		pos_str++;
	}
	return (NULL);
}
/*#include <stdio.h>

int main(void)
{
    const char *str = "Hello, World! This is an example.";
    const char *to_find1 = "World";
    const char *to_find2 = "Planet";
    const char *to_find3 = "example";

    // Buscando "World" en la cadena
    char *result1 = ft_strnstr(str, to_find1, 30);
    if (result1 != NULL)
        printf("Resultado 1: %s\n", result1);
    else
        printf("Resultado 1: NULL\n");

    // Buscando "Planet" en la cadena
    char *result2 = ft_strnstr(str, to_find2, 30);
    if (result2 != NULL)
        printf("Resultado 2: %s\n", result2);
    else
        printf("Resultado 2: NULL\n");

    // Buscando "example" en la cadena
    char *result3 = ft_strnstr(str, to_find3, 30);
    if (result3 != NULL)
        printf("Resultado 3: %s\n", result3);
    else
        printf("Resultado 3: NULL\n");

    return 0;
}*/
