/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:17:39 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/31 16:21:28 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == (char) c)
			return ((char *)&str[pos]);
		pos++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(void) {
    const char *cadena = "Hola, mundo!";
    char caracter_a_buscar = '\0';

    char *resultado = ft_strchr(cadena, caracter_a_buscar);

    if (resultado != NULL) {
        printf("Carácter encontrado: %c\n", *resultado);
        printf("Puntero al carácter: %p\n", (void *)resultado);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}*/
