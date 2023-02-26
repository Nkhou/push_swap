/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 02:07:02 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 23:19:34 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

long	ft_isnum(char *a)
{
	int	i;

	i = 0;
	if (a[i] == '-' || a[i] == '+')
		i++;
	if (!a[i])
		return (1);
	if (a[i] && a[i] == '\0')
		return (1);
	while (a[i])
	{
		if (ft_isdigit(a[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}
