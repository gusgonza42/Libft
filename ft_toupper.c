/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:07:34 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/14 16:12:21 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*#include <stdio.h>
int	main(void)
{
	int c;

	c = ' ';
	printf("%c -> %c", c, ft_toupper(c));
}*/
