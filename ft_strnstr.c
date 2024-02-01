/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:44:33 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/01 13:07:16 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	pos_str;
	size_t	pos_find;

	pos_str = 0;
	if (*to_find == '\0' || str == NULL)
		return ((char *)str);
	while (str[pos_str] != '\0' && pos_str < len)
	{
		pos_find = 0;
		while (to_find[pos_find] == str[pos_str + pos_find]
			&& (pos_str + pos_find) < len)
		{
			if (to_find[pos_find] + 1 == '\0')
				return ((char *)str + pos_str);
			pos_find++;
		}
		pos_str++;
	}
	return (NULL);
}
