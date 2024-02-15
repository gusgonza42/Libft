/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:59:35 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/15 19:07:02 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		pos_s1;
	int		pos_s2;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	pos_s1 = 0;
	while (s1[pos_s1] != '\0')
	{
		str[pos_s1] = s1[pos_s1];
		pos_s1++;
	}
	pos_s2 = 0;
	while (s2[pos_s2] != '\0')
	{
		str[pos_s1 + pos_s2] = s2[pos_s2];
		pos_s2++;
	}
	str[pos_s1 + pos_s2] = '\0';
	return (str);
}
/* // For testing
#include <stdio.h>
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = " dude";
	char	*result = ft_strjoin(s1, s2);
	printf("cloud %s\n", result);
	free(result);
	return (0);
}
*/
