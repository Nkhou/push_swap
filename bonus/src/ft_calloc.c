/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:38:37 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/02/18 23:15:57 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ca;

	ca = malloc (count * size);
	if (ca == NULL)
		return (NULL);
	ft_bzero(ca, count * size);
	return (ca);
}