/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:52:29 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/26 01:30:45 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				pos;
	struct s_list	*next;
}	t_list;

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
t_list	*ft_lstnew(int content);
int		ft_isdigit(int c);
long	ft_isnum(char *a);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
int		ft_atoi(const char *str);
int		main(int ac, char **av);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_lstdelone(t_list *lst);
char	**ft_split(char const *s, char c);
int		ft_isrepeat(t_list *a);
int		check(t_list *a);
void	addpos(t_list *a);
void	rra(t_list **a);
void	rrb(t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rotate(t_list **a);
void	reverse_rotate(t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	swap(t_list **a);
void	push(t_list **to, t_list **send);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	chunk(t_list **a, t_list **b, int len);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst);
void	ft_lst_clear(t_list **stack);
void	law_five(t_list **a, t_list **b, int len);
void	ft_teries(t_list **a, int size);
void	ft_for(t_list **a, t_list **b, int len);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	divide(t_list **a, t_list **b, int len, int d);
int		is_top(t_list **b, int len);
int		dis(t_list **b, int len);
void	push_to_a(t_list **b, t_list **a, int len);
void	taketotop(t_list **b, int len);
void	rr(t_list **b, t_list **a);
void	rrr(t_list **b, t_list **a);
int		put_in_stac(char **av, t_list **a, int ac);
int		ft_isrepeat(t_list *a);
void	free_ss(char **ss);
void	ss(t_list **b, t_list **a);
void	ft_putstr(char *s);
void	less(char **str, t_list **a);
int		ft_strcmp(const char *s1);
void	ft_free(char **p, int last);

#endif