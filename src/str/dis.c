/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:24:43 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/22 22:33:34 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dis(t_list **b, int len)
{
	int		i;
	t_list	*head;

	if (!b)
		return (0);
	i = 0;
	head = *b;
	while (head && (head->pos != len))
	{
		i++;
		head = head->next;
	}
	if (i < ft_lstsize(*b) / 2)
		return (i);
	return (ft_lstsize(*b) - i);
}
