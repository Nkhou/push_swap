/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:36:26 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/20 16:52:35 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_data	*lstlast(t_data *lst)
{
	if (!lst || !(lst->next))
		return (lst);
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
