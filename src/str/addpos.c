/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addpos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:39:26 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/20 17:53:14 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addpos(t_list *a)
{
	t_list	*head;

	if (!a)
		return ;
	while (a)
	{
		head = a->next;
		while (head)
		{
			if (head->content > a->content)
				head->pos = head->pos + 1;
			else
				a->pos = a->pos + 1;
			head = head->next;
		}
		a = a ->next;
	}
}
