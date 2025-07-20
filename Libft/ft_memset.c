/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:17:36 by adrmart2          #+#    #+#             */
/*   Updated: 2023/09/25 18:18:01 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	char			*s;
	size_t			i;

	i = 0;
	uc = (unsigned char)c;
	s = (char *)b;
	while (i < len)
	{
		*s = uc;
		s++;
		i++;
	}
	return (b);
}
