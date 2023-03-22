/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:45:31 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/16 14:49:23 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)*(s1 + i) == (unsigned char)*(s2 + i))
		{
			if (!(*(s1 + i)) && !(*(s2 + i)))
				return (0);
			i++;
		}
		else
			return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
	}
	return (0);
}
