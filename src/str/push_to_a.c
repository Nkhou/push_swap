/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:22:24 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:41:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push_to_a(t_list **b, t_list **a, int len)
{
	int		dis1;
	int		dis2;

	while (*b)
	{
		if (*b && !((*b)->next))
			push_a(a, b);
		dis1 = dis(b, len);
		dis2 = dis(b, len - 1);
		if ((dis2 < dis1))
		{
			taketotop(b, len - 1);
			push_a(a, b);
			taketotop(b, len);
			push_a(a, b);
			sa(a);
			len--;
		}
		else
		{
			taketotop(b, len);
			push_a(a, b);
		}
		len -= 1;
	}
}
