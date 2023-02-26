/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 01:17:16 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/26 01:35:20 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# define BUFFER_SIZE 10

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin_g(char *s1, char *s2);
char	*ft_strdup(const char *s1);
typedef struct s_list
{
	int				content;
	int				pos;
	struct s_list	*next;
}	t_list;

typedef struct s_data
{
	void			*content;
	struct s_data	*next;
}	t_data;

t_list	*ft_lstnew(int content);
int		ft_isdigit(int c);
long	ft_isnum(char *a);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lst_clear(t_list **stack);
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
void	ss(t_list **b, t_list **a);
void	push(t_list **to, t_list **send);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rr(t_list **b, t_list **a);
void	rrr(t_list **b, t_list **a);
void	put_in_stac(char **av, t_list **a, int ac);
char	*get_next_line(int fd);
void	free_ss(char **ss);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_putstr(char *s);
char	*ft_dd_instraction(t_list **a, t_list **b);
void	take_instra(char *instra, t_list **a, t_list **b);
int		is_error(char *instra);
void	ft_print_ok(t_list *a, t_list *b);
int		is_ok(t_list *a);
void	ft_free(char **p, int last);

#endif
