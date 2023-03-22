/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:28:47 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/19 18:43:10 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ttmp;

	tmp = *lst;
	if (tmp)
	{
		while (tmp->next)
		{
			ttmp = tmp->next;
			del((void *)tmp->content);
			free(tmp);
			tmp = ttmp;
		}
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
