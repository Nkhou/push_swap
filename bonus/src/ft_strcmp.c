/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:39:54 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/20 16:57:36 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*my_s1;
	unsigned char	*my_s2;
	size_t			i;

	i = 0;
	my_s1 = (unsigned char *)s1;
	my_s2 = (unsigned char *)s2;
	while ((my_s1[i] != '\0' || my_s2[i] != '\0'))
	{
		if (my_s1[i] != my_s2[i])
			return (my_s1[i] - my_s2[i]);
		i++;
	}
	return (0);
}
