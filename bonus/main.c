/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:52:16 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/26 01:17:57 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int	is_error(char *instra)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = instra;
	while (tmp[i] && tmp[i] != ' ')
		i++;
	if ((tmp[i] && tmp[i] == ' '))
	{
		ft_putstr("ERROR\n");
		exit(0);
	}
	else if (ft_strcmp(instra, "sa\n") == 0 || ft_strcmp(instra, "sb\n") == 0
		|| ft_strcmp(instra, "pa\n") == 0 || ft_strcmp(instra, "pb\n") == 0
		|| ft_strcmp(instra, "ra\n") == 0 || ft_strcmp(instra, "rb\n") == 0
		|| ft_strcmp(instra, "rr\n") == 0 || ft_strcmp(instra, "rra\n") == 0
		|| ft_strcmp(instra, "ss\n") == 0 || ft_strcmp(instra, "rrb\n") == 0
		|| ft_strcmp(instra, "rrr\n") == 0)
		return (0);
	return (1);
}

char	*ft_dd_instraction(t_list **a, t_list **b)
{
	char	*str;

	str = get_next_line(0);
	if (!str)
		return (0);
	if (is_error(str) == 1)
	{
		ft_putstr("ERROR\n");
		free(str);
		exit(1);
	}
	take_instra(str, a, b);
	return (str);
}

void	cheek_repeat(t_list *a)
{
	if (ft_isrepeat(a) == 1)
	{
		ft_putstr ("Error\n");
		exit(1);
	}
}

int	main(int ac, char**av)
{
	t_list	*a;
	t_list	*b;
	char	*str;

	if (ac > 1)
	{
		put_in_stac(av, &a, ac);
		cheek_repeat(a);
		while (1)
		{
			str = ft_dd_instraction(&a, &b);
			if (!(str))
			{
				break ;
			}
			free(str);
		}
		ft_print_ok(a, b);
		ft_lst_clear(&b);
		ft_lst_clear(&a);
	}
	return (0);
}
