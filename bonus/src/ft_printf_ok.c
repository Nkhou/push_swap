/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ok.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:03:21 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/23 23:13:33 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_ok(t_list *a)
{
	t_list	*head;

	head = a;
	while (head && head->next)
	{
		if ((head->content) > ((head->next)->content))
			return (0);
		head = head->next;
	}
	return (1);
}

int	is_empty(t_list *b)
{
	if (!b)
		return (1);
	return (0);
}

void	ft_print_ok(t_list *a, t_list *b)
{
	if (is_ok(a) && is_empty(b))
	{
		ft_putstr("OK\n");
		exit(0);
	}
	else
	{
		ft_putstr("KO\n");
		exit(0);
	}
}
