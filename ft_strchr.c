/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:17:39 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/15 19:34:56 by gusgonza         ###   ########.fr       */
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
/* //For testing
#include <stdio.h>

int	main(void) {
	const char *str = "Hola, mundo!";
	char search_c = 'a';

	char *result= ft_strchr(str, search_c);
	if (result != NULL) 
	{
		printf("Carácter encontrado: '%c'\n", *result);
		printf("Puntero al carácter: '%p'\n", result);
	} else
	printf("Carácter no encontrado.\n");
	return 0;
}
*/
