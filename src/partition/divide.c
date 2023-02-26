/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:02:08 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:41:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	divide(t_list **a, t_list **b, int len, int d)
{
	int	i;
	int	size;

	i = 0;
	if (!(*a) || !len)
		return ;
	size = (len + d) / 2;
	while ((*a) && d < len)
	{
		if ((*a)->pos < len)
		{
			push_b(b, a);
			if ((*b) && ((*b)->pos <= size))
			{
				if ((*a) && !((*a)->pos < len))
					rr(b, a);
				else
					rb(b);
			}
			d++;
		}
		else
			ra(a);
	}
}
