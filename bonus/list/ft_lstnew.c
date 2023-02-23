/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:35:53 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/20 16:52:18 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_data	*lstnew(char *content)
{
	t_data	*lst;

	lst = (t_data *)malloc(sizeof(t_data));
	if (!lst || !content)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
