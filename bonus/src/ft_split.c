/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 23:22:29 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/25 21:45:39 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

static int	ft_skip(char const *s, int i, char c);

static int	ft_malloc(char const *s, char **p, char c, int nwords)
{
	int	i;
	int	j;
	int	r;

	j = 0;
	r = 0;
	while (r < nwords)
	{
		j = ft_skip(s, j, c);
		i = 0;
		while (s[j] && s[j] != c)
		{
			i++;
			j++;
		}
		p[r] = (char *)malloc(sizeof(char) * (i + 1));
		if (!p[r])
		{
			ft_free(p, r);
			return (0);
		}
		r++;
	}
	return (1);
}

static int	ft_skip(char const *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i] && s[i] == c)
	{
		if (s[i] >= '0' && s[i] <= '9')
			j++;
		i++;
	}
	if (j == 0 && s[i] == '\0')
	{
		ft_putstr ("Error\n");
		exit(1);
	}
	return (i);
}

static int	ft_word(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		i = ft_skip(s, i, c);
		if (s[i] && s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

void	prot(char const *s)
{
	if (!s || *s == '\0')
	{
		ft_putstr ("Error\n");
		exit(1);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		count;
	int		i;
	int		j;
	int		r;

	prot(s);
	count = ft_word(s, c);
	p = (char **) malloc(sizeof(char *) * (count + 1));
	if (!p || ft_malloc(s, p, c, count) == 0)
		return (NULL);
	j = 0;
	i = 0;
	while (j < count)
	{
		r = 0;
		i = ft_skip(s, i, c);
		while (s[i] && s[i] != c)
			p[j][r++] = s[i++];
		p[j][r] = '\0';
		j++;
	}
	p[j] = NULL;
	return (p);
}
