/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:39:18 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/17 17:50:20 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src,
			size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (*(src + i))
		i++;
	if (!dest)
		return (i);
	while (j + 1 < size && j < i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	if (size > 0)
		*(dest + j) = '\0';
	return (i);
}
