/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:26:23 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/15 19:24:09 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		f(pos, &s[pos]);
		pos++;
	}
}
/* //For testing
#include <stdio.h>
void	print_index_char(unsigned int index, char *c)
{
	printf("Index: %u, Char: %c\n", index, *c);
}

int	main(void)
{
	char	str[] = "Hello";
	ft_striteri(str, print_index_char);
	return (0);
}
*/
