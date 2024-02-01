/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:37:36 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/01 12:49:27 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int		pos;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *)dest;
	ptr2 = (const unsigned char *)src;
	pos = 0;
	if (!ptr1 || !ptr2)
		return (NULL);
	if (ptr2 < ptr1)
	{
		while (++pos <= len)
			ptr1[len - pos] = ptr2[len - pos];
	}
	else
	{
		while (len-- > 0)
			*(ptr1++) = *(ptr2++);
	}
	return (dest);
}
