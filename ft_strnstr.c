/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:29:43 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/20 18:56:23 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	leng;

	i = 0;
	leng = 0;
	if (!*(needle))
		return ((char *)haystack);
	while (*(haystack + leng) && leng < len)
	{
		i = 0;
		while (*(haystack + leng + i) == *(needle + i) && (leng + i) < len)
		{
			if (!*(needle + i + 1))
				return ((char *)haystack + leng);
			else if (i == len && (leng + i) < len)
				return ((char *)haystack + leng);
			i++;
		}
		leng++;
	}
	return (0);
}
