/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:24:30 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/16 22:20:04 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_lastdex(char const *s1,
	char const *set, int index)
{
	unsigned int	setindex;

	setindex = 0;
	while (*(set + setindex) && index > -1)
	{
		if (*(set + setindex) == *(s1 + index))
		{
			index--;
			setindex = 0;
		}
		else
			setindex++;
	}
	return (index);
}

static unsigned int	ft_findex(char const *s1,
	char const *set, int index)
{
	unsigned int	findex;
	unsigned int	setindex;

	findex = 0;
	setindex = 0;
	while (*(s1 + findex) && *(set + setindex))
	{
		if (*(set + setindex) == *(s1 + findex) && findex < (unsigned int)index)
		{
			findex++;
			setindex = 0;
		}
		else
			setindex++;
	}
	return (findex);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				index;
	unsigned int	findex;
	unsigned int	cindex;
	char			*result;

	findex = 0;
	cindex = 0;
	index = ft_strlen(s1);
	findex = ft_findex(s1, set, index);
	index = ft_lastdex(s1, set, index - 1);
	if (index < 1)
		return (ft_strdup(""));
	result = (char *)malloc(index - findex + 2);
	if (!result)
		return (0);
	while (findex < (unsigned int)(index + 1))
	{
		*(result + cindex) = *(s1 + findex);
		cindex++;
		findex++;
	}
	*(result + cindex) = '\0';
	return (result);
}
