/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:35:08 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/26 01:16:21 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_strcmp(const char *s1)
{
	unsigned char	*my_s1;
	size_t			i;

	i = 0;
	my_s1 = (unsigned char *)s1;
	while (my_s1[i] != '\0')
	{
		if (my_s1[i] >= '0' && my_s1[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}
