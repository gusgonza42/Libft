/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:41:27 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/29 18:49:18 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) dest;
	while (n--)
	{
		*str++ = (unsigned char) c;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char resultado[20];
	char OriginalResultado[20];

	printf("result: %s\n", ft_memset(resultado, 'a', 5));
	printf("result: %s\n", memset(OriginalResultado, 'a', 5));
	return (0);
}*/
