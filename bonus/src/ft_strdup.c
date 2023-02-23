/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:52:06 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/19 00:05:49 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	int		i;

	i = 0;
	c = malloc(sizeof(char ) * (ft_strlen((char *)s1) + 1));
	if (c == NULL)
		return (NULL);
	while (s1[i])
	{
		c[i] = (char )s1[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
