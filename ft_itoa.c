/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:00:36 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/16 21:38:29 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_size(long nbr)
{
	unsigned int	size;

	size = 0;
	while (nbr != 0)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}

static void	ft_str(long nbr, char *result, int size)
{
	if (nbr == 0)
		return ;
	ft_str(nbr / 10, result, size - 1);
	*(result + size) = (nbr % 10) + 48;
}

static char	*ft_zero(void)
{
	char	*result;

	result = (char *)malloc(2);
	if (!result)
		return (0);
	*(result) = '0';
	*(result + 1) = '\0';
	return (result);
}

static void	ft_min_str(char *result, int size)
{
	int	i;

	i = 0;
	while (size > 0)
	{
		*(result + size) = *(result + size - 1);
		size--;
	}
	*(result + size) = '-';
}

char	*ft_itoa(int n)
{
	unsigned int	sign;
	unsigned int	leng;
	long			nbr;
	char			*result;

	sign = 0;
	nbr = (long)n;
	if (nbr < 0)
	{
		nbr = -(nbr);
		sign++;
	}
	else if (nbr == 0)
		return (ft_zero());
	leng = ft_size(nbr);
	result = (char *)malloc(sign + leng + 1);
	if (!result)
		return (0);
	ft_str(nbr, result, leng - 1);
	if (sign)
		ft_min_str(result, leng + sign);
	*(result + leng + sign) = '\0';
	return (result);
}
