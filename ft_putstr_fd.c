/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:51:11 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/15 19:44:52 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*  // For testing
#include <stdio.h>
int	main(void)
{
	char	*str = "Hello";
	int		fd = 1;

	ft_putstr_fd(str, fd);
	return (0);
}
*/
