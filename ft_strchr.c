/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:03:17 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/19 20:57:50 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while ((*(s + index) != (char)c) && *(s + index))
		index++;
	if (*(s + index) || !(char)c)
		return ((char *)s + index);
	return (0);
}
