/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:43:47 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/15 15:40:19 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*source;
	size_t					index;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	index = 0;
	if (dest == source)
		return (dst);
	while (index < n)
	{
		*(dest + index) = *(source + index);
		index++;
	}
	return (dst);
}
