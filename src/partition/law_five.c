/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   law_five.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:04:12 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:41:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	position(t_list **a, int position)
{
	t_list	*head;
	int		i;

	head = *a;
	i = 0;
	while ((head)->pos != position)
	{
		i++;
		head = head->next;
	}
	if (i > 2)
	{
		while ((*a)->pos != position)
			rra(a);
	}
	else
	{
		while ((*a)->pos != position)
			ra(a);
	}
}

void	len_five(t_list **a, t_list **b)
{
	position(a, 0);
	push_b(b, a);
	if (check(*a) == 0)
	{
		position(a, 1);
		push_b(b, a);
		if (check(*a) == 0)
		{
			ft_teries(a, 2);
		}
		push_a(a, b);
	}
	push_a(a, b);
}

void	law_five(t_list **a, t_list **b, int len)
{
	int		i;
	t_list	*head;

	i = 0;
	head = *a;
	if (check(*a) == 0)
	{
		if (len == 3)
			ft_teries(a, 0);
		else if (len == 4)
			ft_for(a, b, len);
		else if (len == 5)
			len_five(a, b);
		else if (len == 2)
			sa(a);
		else
			return ;
	}
	else
		return ;
}
