/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:58:26 by gusgonza          #+#    #+#             */
/*   Updated: 2024/02/11 15:08:11 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**ft_free(char **split)
{
	size_t	pos;

	pos = 0;
	while (split[pos] != NULL)
	{
		free(split[pos]);
		pos++;
	}
	free(split);
	return (NULL);
}

static	size_t	count_word(const char *str, char delimit)
{
	size_t	counter;
	size_t	index;

	if (!str)
		return (0);
	counter = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == delimit)
			index++;
		else
		{
			counter++;
			while (str[index] != delimit && str[index] != '\0')
				index++;
		}
	}
	return (counter);
}

static	char	*get_word(char const *str, char delimit, size_t *str_pos)
{
	char	*word;
	size_t	w_pos;

	w_pos = 0;
	while (str[*str_pos + w_pos] != '\0' && str[*str_pos + w_pos] != delimit)
		w_pos++;
	word = (char *)malloc(sizeof(char) * (w_pos + 1));
	if (word == NULL)
		return (NULL);
	w_pos = 0;
	while (str[*str_pos] != '\0' && str[*str_pos] != delimit)
	{
		word[w_pos] = str[*str_pos];
		w_pos++;
		(*str_pos)++;
	}
	word[w_pos] = '\0';
	return (word);
}

char	**ft_split(char const *s, char delimit)
{
	char	**arr;
	size_t	pos;
	size_t	str_pos;

	if (!s)
		return (NULL);
	arr = (char **)malloc((count_word(s, delimit) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	pos = 0;
	str_pos = 0;
	while (s[str_pos] != '\0')
	{
		if (s[str_pos] == delimit)
			str_pos++;
		else
		{
			arr[pos] = get_word(s, delimit, &str_pos);
			if (arr[pos] == NULL)
				return (ft_free(arr));
			pos++;
		}
	}
	arr[pos] = NULL;
	return (arr);
}
/*
int	main(void)
{
	// 2 palabras 9 delimitadores
	char	*str2 = "    a b     c d    ";
	char	delimit = ' ';
	char **split = ft_split(str2, delimit);
	if (!split)
		return (1);
	printf("AAA: %lu\n", count_word(str2, delimit));
	for (int i = 0; split[i]; i++)
		printf("%s\n", split[i]);
	ft_free(split);
	return (0);
}*/
