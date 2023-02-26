/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:16:08 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:45:39 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst || !(lst->next))
		return (lst);
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
