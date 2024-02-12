/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:56:29 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/12 14:59:35 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
/* //For testing
int main() {
    const char *s1 = "holai";
    const char *s2 = "holaa";
    size_t len = 4;

    int result = ft_strncmp(s1, s2, len);

    if (result == 0) {
        printf("s1 & s2 are equal.\n");
    } else if (result < 0) {
        printf("s1 is less than s2.\n");
    } else {
        printf("s1 is greater than s2.\n");
    }
    return 0;
}
*/
