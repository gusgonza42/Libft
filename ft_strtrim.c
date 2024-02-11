/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:41:40 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/11 13:41:13 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	pos;
	size_t	start;
	size_t	end;
	char	*trim_str;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim_str)
		return (NULL);
	pos = 0;
	ft_strlcpy(trim_str, &s1[start], end - start + 1);
	return (trim_str);
}
/*
int main (void)
{
	char *s1 = "";
	char *expectedReturn = "";
	char *ret = ft_strtrim(s1, " \n\t");

	if (!strcmp(ret, expectedReturn))
		write(1, "GOD\n", 4);
	else
		write(1, "kekw\n", 5);
}*/
