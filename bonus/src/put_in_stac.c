/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_stac.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:56:59 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 23:20:43 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

void	put_in_stac(char **av, t_list **a, int ac)
{
	char	**ss;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		ss = ft_split(av[i], ' ');
		j = 0;
		while (ss[j])
		{
			if (ft_isnum(ss[j]) == 1)
			{
				ft_putstr ("Error\n");
				free_ss(ss);
				ft_lst_clear(a);
				exit(0);
			}
			ft_lstadd_back(a, ft_lstnew(ft_atoi(ss[j])));
			j++;
		}
		free_ss(ss);
		i++;
	}
}
