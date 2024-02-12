/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:41:40 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/12 13:42:30 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
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
	ft_strlcpy(trim_str, &s1[start], end - start + 1);
	return (trim_str);
}
/* // For testing
int main (void)
{
	char const	*s1 = "xxHello Dudexx";
	char const	*set= "x ";
	char		*trimmed_str;

	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str == NULL)
		printf("Error allocating memory\n");
	printf("original str: '%s'\n", s1);
	printf("Ft_         : '%s'\n", trimmed_str);
	free(trimmed_str);
	return (0);
}*/
