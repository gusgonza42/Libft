/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:26:23 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/09 18:38:28 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	pos;

	if (!s || !f)
		return ;
	pos = 0;
	while (s[pos] != '\0')
	{
		f(pos, &s[pos]);
		pos++;
	}
}
