/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:50:22 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/23 20:29:03 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
