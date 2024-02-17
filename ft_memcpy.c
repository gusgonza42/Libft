/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:16:01 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 16:56:35 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	pos;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	pos = 0;
	while (n--)
	{
		d[pos] = s[pos];
		pos++;
	}
	return (dest);
}
/* //For testing
#include <stdio.h>

int	main (void)
{
	char src[] = "Text for testing";
	char dest[30];

	ft_memcpy(dest, src, 10);
	printf("ft_memcpy: '%s'\n", dest);
	printf("   memcpy: '%s'\n", dest);
	return (0);
}
*/
