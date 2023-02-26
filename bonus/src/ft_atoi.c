/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:52:21 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 23:16:06 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

static int	ft_at(const char *str, int sgn)
{
	long	i;
	long	res;
	long	tmp;

	i = 0;
	res = 0;
	if (!(str))
	{
		ft_putstr("Error\n");
		exit(EXIT_FAILURE);
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		tmp = res;
		res = (res * 10) + (str[i] - '0');
		if ((res > 2147483647 && sgn == 1) || (res > 2147483648 && sgn == -1))
		{
			ft_putstr("Error\n");
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	sgn;
	long	res;

	i = 0;
	sgn = 1;
	res = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn *= (-1);
		i++;
	}
	res = ft_at(str + i, sgn);
	return (res * sgn);
}
