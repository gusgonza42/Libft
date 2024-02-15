/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:32:12 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/15 19:52:11 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}
/* // For testing
#include "libft.h"

int	main(void)
{
	int num1 = 12345;
	int num2 = 0;
	int num3 = -6789;
	int fd = 1;

	ft_putnbr_fd(num1, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(num2, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(num3, fd);
	ft_putchar_fd('\n', fd);
	return (0);
}
*/
