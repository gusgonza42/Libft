/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:13:48 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/12 14:43:31 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char) c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}
/* //For testing
int main (void)
{
	char	c = 'u';
	printf("Original -> '%s'\n", strrchr("Haikyu0000series", c));
	printf("Ft_      -> '%s'\n", ft_strrchr("Haikyu0000series", c));
	return (0);
}
*/
