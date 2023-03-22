/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:10:48 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/17 16:03:09 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*result;

	index = ft_strlen(s);
	if (start > index)
		return (ft_strdup(""));
	if (index < start + len)
	{
		index = 0;
		while (*(s + start + index))
			index++;
		result = (char *)malloc(index + 1);
	}
	else
		result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	index = 0;
	while (*(s + start + index) && (index < len))
	{
		*(result + index) = *(s + start + index);
		index++;
	}
	*(result + index) = '\0';
	return (result);
}
