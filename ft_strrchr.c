/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:13:48 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/01 12:29:27 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == (char) c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}
/*#include <stdio.h>

int main (void)
{
		printf("Result ft : %s", ft_strrchr("poto0000ta", 'o'));

	return (0);

}*/
