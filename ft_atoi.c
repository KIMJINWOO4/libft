/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwokim <jinwokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:47:51 by jinwokim          #+#    #+#             */
/*   Updated: 2023/03/16 14:17:37 by jinwokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	space_check(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v')
			i++;
		else if (str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		else
			break ;
	}
	return (i);
}

static long long	ft_cal(long long result, int flag)
{
	if (flag == 1)
		return (result * -1);
	return (result);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			flag;
	long long	result;

	result = 0;
	flag = 0;
	i = space_check(str);
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			flag++;
		i++;
	}
	while (*(str + i))
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
		{
			result *= 10;
			result += (*(str + i)) - '0';
		}
		else
			break ;
		i++;
	}
	return ((int)ft_cal(result, flag));
}
