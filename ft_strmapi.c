/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:57:26 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/12 15:38:51 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		pos;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	pos = 0;
	while (s[pos] != '\0')
	{
		str[pos] = f(pos, s[pos]);
		pos++;
	}
	str[pos] = '\0';
	return (str);
}
/* // For Testing
char increment_char(unsigned int pos, char c)
{
	return (c + pos);
}

int	main (void)
{
	char const	*s = "Hello";
	char		*str_transformed;

	str_transformed = ft_strmapi(s, increment_char);
	if (!str_transformed)
	{
		printf("Error allocating memory\n");
		return (1);
	}
	printf("Original -> %s\n", s);
	printf("Ft_      -> %s\n", str_transformed);
	free(str_transformed);
	return (0);
}
*/
