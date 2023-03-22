/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:08:17 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/17 16:06:14 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	insert_word(char *arr, char const *str)
{
	int	j;
	int	sum;

	sum = 0;
	j = 0;
	while (*(str + j))
	{
		*(arr + j) = *(str + j);
		j++;
		sum++;
	}
	return (sum);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	sum;
	char			*arr;

	i = 0;
	sum = 0;
	sum += ft_strlen(s1);
	sum += ft_strlen(s2);
	arr = (char *)malloc(sum + 1);
	if (!arr)
		return (0);
	i = insert_word(arr, s1);
	i += insert_word(arr + i, s2);
	*(arr + sum) = '\0';
	return (arr);
}
