/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:20:40 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/12 15:44:01 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	pos;
	size_t	len;

	pos = 0;
	len = 0;
	while (s[pos] != '\0')
	{
		len++;
		pos++;
	}
	return (len);
}
/* //For testing
int	main(void)
{
	char *c = "Yow |m chat test";
	printf("%s \n", c);
	printf("ft -> %zu \n", ft_strlen(c));
	printf("Original -> %zu \n", strlen(c));
	return (0);
}
*/
