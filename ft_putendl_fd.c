/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:54:53 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/15 19:55:43 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/* //For testing
int	main(void)
{
	int fd = 1; 

	ft_putendl_fd("Yow, dude", fd);
	ft_putendl_fd("Bye!", fd);
	return (0);
}
*/
