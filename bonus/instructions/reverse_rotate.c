/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:10:14 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:45:39 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

void	reverse_rotate(t_list **b)
{
	t_list	*head;
	t_list	*tmp;

	head = (*b);
	if (!(*b) || !((*b)->next))
		return ;
	tmp = ft_lstlast(*b);
	if (!tmp)
		return ;
	while (head && head->next->next)
		head = head->next;
	head->next = NULL;
	tmp->next = (*b);
	(*b) = tmp;
}
