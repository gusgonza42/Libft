/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:09:53 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 20:07:05 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long number)
{
	int	counter;

	counter = 0;
	if (number <= 9 && number >= 0)
		return (1);
	else if (number < 0)
	{
		counter++;
		number *= -1;
	}
	while (number != 0)
	{
		number /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	int		num_len;
	long	num_long;

	num_long = (long) n;
	num_len = count_digits(num_long);
	str_num = (char *) ft_calloc((num_len + 1), sizeof(char));
	if (!str_num)
		return (NULL);
	if (num_long == 0)
		str_num[0] = '0';
	if (num_long < 0)
	{
		str_num[0] = '-';
		num_long *= -1;
	}
	num_len--;
	while (num_long != 0)
	{
		str_num[num_len] = (num_long % 10) + '0';
		num_len--;
		num_long /= 10;
	}
	return (str_num);
}
/* // For testing
#include <stdio.h>

int	main (void)
{
	//int number = -2147483648;
	int number = 0;
	char *str;

	str = ft_itoa(number);
	if (str != NULL)
	{
		printf("INT '%d' to string '%s'\n", number, str);
		free(str);
	}
	else
		printf("Error: INT '%d' to string.\n", number);
	return (0);
}
*/
