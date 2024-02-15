/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:36:09 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/15 20:38:08 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_len;

	total_len = nmemb * size;
	ptr = (char *)malloc(total_len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_len);
	return (ptr);
}
/* //For testing
#include <stdio.h>

int main(void)
{
	int *ptr;
	size_t nmemb = 5;
	size_t size = sizeof(int);

	ptr = ft_calloc(nmemb, size);
	if (ptr == NULL)
	{
		printf("Error Failed to allocate memory\n");
		return (1);
	}
	printf("Array contents after memory allocation\n");
    for (size_t pos = 0; pos < nmemb; pos++)
        printf("%d ", ptr[pos]);
	printf("\n");
	free(ptr);
	return (0);
}
*/
