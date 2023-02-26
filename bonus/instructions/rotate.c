/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:06:16 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:45:39 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

void	rotate(t_list **a)
{
	t_list	*head;
	t_list	*tmp;

	if (!(*a) || !((*a)->next))
		return ;
	head = (*a)->next;
	tmp = (*a)->next;
	(*a)->next = NULL;
	if (!head || !tmp || !head)
		return ;
	while (head && head->next)
		head = head->next;
	head->next = *a;
	(*a) = tmp;
}
