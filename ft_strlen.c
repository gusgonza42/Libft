/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:20:40 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/17 15:04:44 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
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
