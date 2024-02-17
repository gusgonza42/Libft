/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:37:36 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 17:00:10 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	pos;
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	pos = 0;
	if (!ptr1 && !ptr2)
		return (NULL);
	if (ptr1 < ptr2)
	{
		while (pos < len)
		{
			ptr1[pos] = ptr2[pos];
			pos++;
		}
	}
	else
	{
		while (len--)
			ptr1[len] = ptr2[len];
	}
	return (dest);
}
/* // For testing
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Hello, world!";
	char str2[20];
	char str3[20];

	ft_memmove(str2, str1, 7);
	printf("ft_    : '%s'\n", str2);
	memmove(str3, str1, 7);
	printf("memmove: '%s'\n", str3);
	return 0;
}
*/
