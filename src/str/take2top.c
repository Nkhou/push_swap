/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take2top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:27:02 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/20 18:01:12 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	taketotop(t_list **b, int len)
{
	if (is_top(b, len))
		while ((*b) && ((*b)->pos != len))
			rb(b);
	else
		while ((*b) && ((*b)->pos != len))
			rrb(b);
}
