/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:20:24 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/17 17:44:21 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_word_count(char const *str, char delimeter)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (*(str + i))
	{
		while (*(str + i) && (*(str + i) == delimeter))
			i++;
		if (*(str + i))
			count++;
		while (*(str + i) && !(*(str + i) == delimeter))
			i++;
	}
	return (count);
}

static unsigned int	ft_char_len(char const *str, char delimeter)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
	{
		if ((*(str + i) != delimeter))
			i++;
		else
			break ;
	}
	return (i);
}

static char	*ft_string(char const *str, char delimeter)
{
	char			*word;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_char_len(str, delimeter);
	word = (char *)malloc(i + 1);
	if (!word)
		return (0);
	while (j < i)
	{
		*(word + j) = *(str + j);
		j++;
	}
	*(word + i) = '\0';
	return (word);
}

static char	**ft_setfree(char **result, unsigned int count)
{
	unsigned int	index;

	index = 0;
	while (index < count)
		free(result[index++]);
	free(result);
	return ((char **)0);
}

char	**ft_split(char const *str, char c)
{
	char			**result;
	unsigned int	size;
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	size = ft_word_count(str, c);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (0);
	while (count < size)
	{
		while (*(str + i) && (*(str + i) == c))
			i++;
		if (*(str + i))
			result[count++] = ft_string((str + i), c);
		if (!result[count - 1])
			return (ft_setfree(result, count));
		while (*(str + i) && !(*(str + i) == c))
			i++;
	}
	*(result + size) = 0;
	return (result);
}
