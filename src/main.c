/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:37:21 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/26 00:18:15 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	int		len;
	t_list	*b;

	if (ac > 1)
	{
		len = put_in_stac(av, &a, ac);
		if (ft_isrepeat(a) == 1)
		{
			ft_putstr ("Error\n");
			ft_lst_clear(&a);
			exit(1);
		}
		addpos(a);
		chunk(&a, &b, len);
		ft_lst_clear(&a);
	}
	return (0);
}
