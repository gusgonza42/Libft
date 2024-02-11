/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:37:36 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/11 16:57:50 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			pos;
	char			*ptr1;
	char			*ptr2;

	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	pos = 0;
	if (!ptr1 && !ptr2)
		return (0);
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
