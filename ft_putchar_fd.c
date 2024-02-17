/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:47:23 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/16 14:38:04 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* //For test
int	main(void)
{
	int fd = 1;

	ft_putchar_fd('E', fd);
	ft_putchar_fd('y', fd);
	ft_putchar_fd('\n', fd);
	ft_putchar_fd('Y', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('w', fd);
	ft_putchar_fd('\n', fd);

	return (0);
}
*/
