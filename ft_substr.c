/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:34:42 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/08 20:55:22 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		pos;
	size_t		len_s;

	pos = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	ptr = (char *)malloc(sizeof((len + 1) * sizeof(char)));
	if (!ptr)
		return (NULL);
	if (start >= len_s)
	{
		ptr[0] = '\0';
		len = 0;
	}
	else if (len > len_s - start)
		len = len_s - start;
	while (pos < len && s[start + pos] != '\0')
	{
		ptr[pos] = s[start + pos];
		pos++;
	}
	ptr[pos] = '\0';
	return (ptr);
}
