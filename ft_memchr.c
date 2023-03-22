/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:11:35 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/16 20:08:27 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					index;
	const unsigned char		*src;

	src = (const unsigned char *)s;
	index = 0;
	if (!n)
		return (0);
	while (index < n)
	{
		if (*(src + index) == (unsigned char)c)
			return ((void *)src + index);
		index++;
	}
	if (!(unsigned char)c && index != n)
		return ((void *)src + index);
	return (0);
}
