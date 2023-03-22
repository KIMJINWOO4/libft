/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:31:50 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/15 19:35:34 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	size;
	unsigned int	index;

	index = 0;
	size = ft_strlen(s);
	while (index < size)
	{
		f(index, (s + index));
		index++;
	}
}
