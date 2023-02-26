/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_instra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 04:47:48 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/26 00:50:56 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

void	take_instra(char *instra, t_list **a, t_list **b)
{
	if (ft_strcmp(instra, "sa\n") == 0)
		sa(a);
	else if (ft_strcmp(instra, "sb\n") == 0)
		sb(b);
	else if (ft_strcmp(instra, "pa\n") == 0)
		push_a(a, b);
	else if (ft_strcmp(instra, "pb\n") == 0)
		push_b(b, a);
	else if (ft_strcmp(instra, "ra\n") == 0)
		ra(a);
	else if (ft_strcmp(instra, "rb\n") == 0)
		rb(b);
	else if (ft_strcmp(instra, "rr\n") == 0)
		rr(b, a);
	else if (ft_strcmp(instra, "rra\n") == 0)
		rra(a);
	else if (ft_strcmp(instra, "rrr\n") == 0)
		rrr(b, a);
	else if (ft_strcmp(instra, "ss\n") == 0)
		ss(a, b);
	else if (ft_strcmp(instra, "rrb\n") == 0)
		rrb(b);
}
