/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_top.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:32:20 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:41:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	is_top(t_list **b, int len)
{
	t_list	*head;
	int		half;
	int		i;

	head = *b;
	i = 0;
	while (head && head->pos != len)
	{
		i++;
		head = head->next;
	}
	half = ft_lstsize(*b) / 2;
	return (i <= half);
}
