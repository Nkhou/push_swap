/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:58:39 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:41:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_lst_clear(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = *stack;
		(*stack) = (*stack)->next;
		free(tmp);
	}
}
