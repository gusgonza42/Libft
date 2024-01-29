/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:28:39 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/13 18:43:16 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int c = 0;
	if(ft_isdigit(c))
		printf("%d -> True\n", c);
	else
		printf("%d -> False\n", c);
	if(isdigit(c))
		printf("%d -> True\n", c);
	else
		printf("%d -> False\n", c);
	return (0);
}*/
