/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:38:11 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/16 20:18:46 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				index;

	index = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (!p1 && !p2)
		return (0);
	while (index < n)
	{
		if (*(p1 + index) != *(p2 + index))
			return ((int)(*(p1 + index) - *(p2 + index)));
		index ++;
	}
	return (0);
}
