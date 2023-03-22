/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:42:58 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/21 17:19:15 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;

	mem = malloc(size * count);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		*((unsigned char *)mem + i) = 0;
		i++;
	}
	return (mem);
}
