/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tries.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:05:07 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:41:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_teries(t_list **a, int size)
{
	if (check(*a) == 1)
		return ;
	if (((*a)->pos - size == 1 && (*a)->next->pos - size == 0) \
		|| ((*a)->pos - size == 2 && (*a)->next->pos - size == 1)
		|| ((*a)->pos - size == 0 && (*a)->next->pos - size == 2))
		sa(a);
	if ((*a)->pos - size == 1 && (*a)->next->pos - size == 2)
		rra(a);
	if ((*a)->pos - size == 2 && (*a)->next->pos - size == 0)
		ra(a);
}
