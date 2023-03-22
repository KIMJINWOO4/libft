/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:22:42 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/15 19:31:05 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	index;
	char			*result;

	index = 0;
	size = ft_strlen(s);
	result = (char *)malloc(size + 1);
	if (!result)
		return (0);
	while (index < size)
	{
		*(result + index) = f(index, *(s + index));
		index++;
	}
	*(result + index) = '\0';
	return (result);
}
