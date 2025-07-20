/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:04:55 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:18:14 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*first;

	first = malloc (count * size);
	if (first == NULL)
	{
		return (NULL);
	}
	ft_bzero (first, count * size);
	return (first);
}
/*void * malloc(size_t size);*/
/*si hay un error devuelve NULL*/