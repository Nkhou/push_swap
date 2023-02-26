/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:31:49 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:42:15 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	calldivide(t_list **a, t_list **b, int len, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (*a)
	{
		divide(a, b, (len / size) * i, j);
		j = ((len / size) * i);
		i++;
	}
	if (len % size != 0)
		divide(a, b, (len % size) * i, j);
}

void	chunk(t_list **a, t_list **b, int len)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (check(*a) == 0)
	{
		if (len <= 5)
			law_five(a, b, len);
		else if (len <= 200)
			calldivide(a, b, len, 5);
		else
			calldivide(a, b, len, 9);
		len--;
		push_to_a(b, a, len);
	}
}
