/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:12:50 by adrmart2          #+#    #+#             */
/*   Updated: 2023/09/24 21:02:18 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	while (dst[i] != '\0')
		i++;
	dest_len = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	src_len = i;
	i = 0;
	if (dest_len >= dstsize)
		return (src_len + dstsize);
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - dest_len - 1)
		{
			dst[dest_len + i] = src[i];
			i++;
		}
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
