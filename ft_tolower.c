/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:12:45 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/14 16:17:10 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	int c;

	c = 'A';
	printf("%c -> %c", c, ft_tolower(c));
	return (0);
}*/
