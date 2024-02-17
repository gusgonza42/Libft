/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:34:19 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 18:37:11 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (((unsigned char *)str)[pos] == (unsigned char)c)
			return ((void *)&str[pos]);
		pos++;
	}
	return (NULL);
}
/*
 // For testing
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World";
	int		c = 'a';
	char	*found;

	found = (char *)ft_memchr(str, c, sizeof(str));
	if (found)
		printf("'%c' found -> '%s'\n", c, found);
	else
		printf("'%c' NOT found\n", c);
	return (0);
}
*/
