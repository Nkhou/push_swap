/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isrepeat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:07:44 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/20 17:37:43 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isrepeat(t_list *a)
{
	t_list	*b;

	if (!a)
		return (1);
	while (a)
	{
		b = a->next;
		while (b)
		{
			if ((a->content) == (b->content))
				return (1);
			b = b->next;
		}
		a = a->next;
	}
	return (0);
}
