/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:07:34 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/14 19:06:23 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*// For testing
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("Original: %c -> %c\n", 'a', ft_toupper('a'));
	printf("ft_: %c -> %c\n", 'a', toupper('a'));
	return (0);
}*/
