/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:38:36 by gusgonza          #+#    #+#             */
/*   Updated: 2024/01/29 19:40:39 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	unsigned char	pos;
	ptr = (unsigned char *) str;

	pos = 0;
	while (pos < n)
	{
		ptr[pos] = 0;
		pos++;
	}
}
#include <stdio.h>

int main(void)
{
	char *str = "yowchat";
	ft_bzero(str,6);
	 printf("Result: %s\n", str);
	return (0);
}
