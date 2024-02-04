/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:17:39 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/03 18:00:48 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	pos;

	pos = 0;
	while (str[pos] != (char) c)
	{
		if (str[pos] == '\0')
			return (0);
		pos++;
	}
	return ((char *)&str[pos]);
}
/*#include <stdio.h>
int main(void) {
    const char *cadena = "Hola, mundo!";
    char caracter_a_buscar = 'u';

    char *resultado = ft_strchr(cadena, caracter_a_buscar);

    if (resultado != NULL) {
        printf("Carácter encontrado: %c\n", *resultado);
        printf("Puntero al carácter: %p\n", (void *)resultado);
    } else {
        printf("Carácter no encontrado.\n");
    }

    return 0;
}*/
