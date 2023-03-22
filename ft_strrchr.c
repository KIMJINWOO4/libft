/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:06:42 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/19 20:58:33 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (*(s + index))
		index++;
	while ((*(s + index) != (char)c) && index > 0)
		index--;
	if (!index && *(s + index) != (char)c)
		return (0);
	return ((char *)s + index);
}
