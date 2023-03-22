/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:42:15 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/17 18:08:54 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recur(int n, int fd)
{
	unsigned char	c;

	if (n == 0)
		return ;
	ft_recur(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned char	digwr;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n > 9)
		ft_recur(n, fd);
	else if (n > 0)
	{
		digwr = (n % 10) + '0';
		write(fd, &digwr, 1);
	}
	else if (!n)
		write(fd, "0", 1);
	else
	{
		n = -(n);
		write(fd, "-", 1);
		ft_recur(n, fd);
	}
}
