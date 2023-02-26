/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:51:51 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:41:22 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static char	*ft_strcon(size_t d, char const *s1, char const *s2)
{
	char		*p;
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	p = ft_calloc(1, d);
	len = ft_strlen(s1);
	if (!p)
		return (NULL);
	while (i < d)
	{
		if (i < ft_strlen(s1))
			p[i] = s1[i];
		else if (i == len)
			p[i] = ' ';
		else
			p[i] = s2[j++];
		i++;
	}
	return (p);
}

char	*ft_strjoin_g(char const *s1, char const *s2)
{
	size_t		i;
	size_t		d;
	size_t		j;
	int			mys2;
	char		*p;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		s2 = ft_strdup("");
	mys2 = ft_strlen(s2);
	d = ft_strlen(s1) + mys2 + 1;
	p = ft_strcon(d, s1, s2);
	return (p);
}
