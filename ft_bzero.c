/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:38:36 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/01 12:45:58 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, int n)
{
	unsigned char	*ptr;
	int				pos;

	pos = 0;
	ptr = (unsigned char *) str;
	while (pos < n)
	{
		ptr[pos] = 0;
		pos++;
	}
}
/*#include <stdio.h>

int main(void)
{
	char *str = "yowchat";
	ft_bzero(str,6);
	 printf("Result: %s\n", str);
	return (0);
}*/
