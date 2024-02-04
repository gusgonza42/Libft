/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:27:22 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/04 17:13:59 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	pos;
	int	sign;
	int	result;

	pos = 0;
	sign = 1;
	result = 0;
	while (str[pos] == ' ' || str[pos] == '\n' || str[pos] == '\t'
		|| str[pos] == '\v' || str[pos] == '\f' || str[pos] == '\r')
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign *= -1;
		pos++;
	}
	while (ft_isdigit(str[pos]) && str[pos] != '\0')
	{
		result = result * 10 + (str[pos] - '0');
		pos++;
	}
	return ((int)result * sign);
}
/*
#include <stdio.h>
int	main(void){
	char *c = "-12 312";
	printf("%d\n", atoi(c));
	printf("%d\n", ft_atoi(c));
	return (0);
}*/
