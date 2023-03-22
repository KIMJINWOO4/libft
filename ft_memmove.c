/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:08:20 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/15 20:41:45 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (source == dest)
		return (dst);
	if (dest > source)
	{
		dest = dest + len;
		source = source + len;
		while (len > 0)
		{
			*(--dest) = *(--source);
			len--;
		}
	}
	else
		dst = ft_memcpy(dest, source, len);
	return (dst);
}
