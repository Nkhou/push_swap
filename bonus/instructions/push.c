/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 01:52:27 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/20 17:00:40 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_list **to, t_list **send)
{
	t_list	*tmp;
	t_list	*cur;

	if (!(*send))
		return ;
	cur = *send;
	tmp = cur->next;
	cur->next = NULL;
	ft_lstadd_front(to, cur);
	(*send) = tmp;
}
