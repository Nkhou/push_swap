/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_stac.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:56:59 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/23 00:26:41 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	less(char **str, t_list **a)
{
	ft_putstr ("Error\n");
	free_ss(str);
	ft_lst_clear(a);
	exit(1);
}

int	put_in_stac(char **av, t_list **a, int ac)
{
	char	**ss;
	int		i;
	int		j;
	int		len;

	i = 1;
	len = 0;
	while (i < ac)
	{
		ss = ft_split(av[i], ' ');
		j = 0;
		while (ss[j])
		{
			if (ft_isnum(ss[j]) == 1)
				less(ss, a);
			ft_lstadd_back(a, ft_lstnew(ft_atoi(ss[j])));
			j++;
			len++;
		}
		free_ss(ss);
		i++;
	}
	return (len);
}
