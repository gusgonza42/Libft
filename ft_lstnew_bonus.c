/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:48:58 by gusgonza          #+#    #+#             */
/*   Updated: 2024/06/16 14:11:18 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return (0);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}
/* #include <stdio.h> */

/* int	main(void) */
/* { */
/* 	char	*content; */
/* 	t_list	*new_node; */

/* 	content = "Yow dude"; */
/* 	new_node = ft_lstnew(content); */

/* 	//checker */
/* 	if (new_node == NULL) */
/* 		write(1, "KO\n", 3); */

/* 	printf("Content NODE -> %s\n", (char *)new_node->content); */
/* 	printf("Next NODE -> %p\n", (void *)new_node->next); */
/* 	free(new_node); */
/* 	return (0); */
/* } */
