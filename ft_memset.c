/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:42:45 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/15 15:25:35 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	setchar;
	unsigned char	*dst;
	size_t			i;

	i = 0;
	setchar = (unsigned char)c;
	dst = (unsigned char *)b;
	while (i < len)
	{
		*(dst + i) = setchar;
		i++;
	}
	return (b);
}
