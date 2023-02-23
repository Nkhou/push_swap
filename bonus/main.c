/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:52:16 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/23 05:11:52 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_ok(t_list *a)
{
	t_list	*head;

	head = a;
	while (head && head->next)
	{
		if ((head->content) > ((head->next)->content))
			return (0);
		head = head->next;
	}
	return (1);
}

int	is_error(char *instra)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = instra;
	while (tmp[i] && tmp[i] != ' ')
		i++;
	if (tmp[i] == ' ')
	{
	//printf("tmp: %c\n", tmp[i]);
		// printf("tmp[i + 1] : %c\n", tmp[i + 1]);
		ft_putstr("ERROR\n");
		exit(0);
	}
	else if (ft_strcmp(instra, "sa\n") == 0 || ft_strcmp(instra, "sb\n") == 0
		|| ft_strcmp(instra, "pa\n") == 0 || ft_strcmp(instra, "pb\n") == 0
		|| ft_strcmp(instra, "ra\n") == 0 || ft_strcmp(instra, "rb\n") == 0
		|| ft_strcmp(instra, "rr\n") == 0 || ft_strcmp(instra, "rra\n") == 0
		|| ft_strcmp(instra, "rrb\n") == 0 || ft_strcmp(instra, "rrr\n") == 0
		|| ft_strcmp(instra, "sa\n") == 0)
		return (0);
	return (1);
}

void	ft_dd_instraction(t_data **str, t_list **a, t_list **b)
{
	(*str) = lstnew(get_next_line(0));
	if (!(*str))
		return ;
	if (is_error((*str)->content) == 1)
	{
		ft_putstr("ERROR\n");
		exit(0);
	}
	take_instra((*str)->content, a, b);
}

void	cheek_repeat(t_list *a)
{
	if (ft_isrepeat(a) == 1)
	{
		ft_putstr ("Error\n");
		ft_lst_clear(&a);
		exit(0);
	}
}

int	main(int ac, char**av)
{
	t_list	*a;
	t_list	*b;
	t_data	*str;

	if (ac > 1)
	{
		put_in_stac(av, &a, ac);
		cheek_repeat(a);
		while (1)
		{
			ft_dd_instraction(&str, &a, &b);
			if (!(str->content))
				break ;
		}
		printf("hiiiiii\n");
		if (is_ok(a))
		{
			ft_putstr("OK\n");
			exit(0);
		}
		else
			ft_putstr("KO\n");
	}
}
