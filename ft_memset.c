/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:41:27 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 14:31:37 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	pos;

	str = (unsigned char *) dest;
	pos = 0;
	while (pos < n)
	{
		str[pos] = (unsigned char) c;
		pos++;
	}
	return (dest);
}
/* // For testing
#include <stdio.h>
#include <string.h>
int main (void)
{
	char str1[] = "Hello world";
	char str2[] = "Hello world";

	printf("Ft	 -> %s\n", ft_memset(str1, '*', 5));
	printf("Original -> %s\n", memset(str2, '*', 5));
	return (0);
}
*/
