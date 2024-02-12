/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:34:42 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/12 13:17:59 by gusgonza         ###   ########.fr       */
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
	if (start <= len_s)
	{
		if (len > len_s - start)
			len = len_s - start;
		ptr = (char *)ft_calloc((len + 1), sizeof(char));
		if (!ptr)
			return (NULL);
		while (pos < len && s[start + pos] != '\0')
		{
			ptr[pos] = s[start + pos];
			pos++;
		}
	}
	else
		return (ft_calloc(1, sizeof(char)));
	return (ptr);
}
/*//For testing
int	main (void)
{
	char	s1[] = "Hello/people/of/Tomorrowland";
	printf("My ft_   -> %s\n", ft_substr(s1, 0, 4));
	return (0);
}*/
