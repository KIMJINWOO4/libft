/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:30:51 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/19 18:48:50 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*result;
	void	*newlst;

	result = 0;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		newlst = f(lst->content);
		tmp = ft_lstnew(newlst);
		if (!tmp)
		{
			ft_lstclear(&result, del);
			del(newlst);
			return (0);
		}
		ft_lstadd_back(&result, tmp);
		lst = lst->next;
	}
	return (result);
}
