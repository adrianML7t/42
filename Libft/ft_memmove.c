/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:34:50 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:24:49 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, void *src, size_t len)
{
	int		i;
	void	*str;

	str = dst;
	if (src == 0 && dst == 0)
		return ((char *)0);
	if (dst < src)
	{
		i = 0;
		while (i < (int)len)
		{
			(((char *)dst)[i] = ((char *)src)[i]);
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (str);
}

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*c_dst;
	unsigned const char	*c_src;
	size_t		i;
	
	c_dst = (unsigned char *)dst;
	c_src = (unsigned const char *)src;
	i = 0;
	if (c_src > c_dst)
	{
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	else if (c_src < c_dst)
	{
		i = len - 1;
		while (i > 0)
		{
			c_dst[i] = c_src[i];
			i--;
		}
	}
	return (dst);
}*/

/*diferencia entre memcpy y memmove (buffer)
https://www.youtube.com/watch?v=nFl1cNXk85s*/
/*
  sin solape: --> (como memcpy)
  con solape: <--
*/