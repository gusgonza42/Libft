/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:38:36 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 14:37:25 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	size_t			pos;

	pos = 0;
	ptr = (unsigned char *) str;
	while (pos < n)
	{
		ptr[pos] = 0;
		pos++;
	}
}
/* // For testing
#include <stdio.h>

int main(void)
{
	char str[] = "yowchat i";
	size_t	cont = 0;
	size_t	size = ft_strlen(str);
	ft_bzero(str,7);
	while (cont < size)
	{
		printf("'%d'", str[cont]);
		cont++;
	}
		printf("\n");
	return (0);
}
*/
