/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:40:17 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/22 22:32:48 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_list *a)
{
	if (!a)
		return (0);
	while (a && a->next)
	{
		if (a->pos > a->next->pos)
			return (0);
		a = a->next;
	}
	return (1);
}