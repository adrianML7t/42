/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:16:19 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:22:35 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	ss1 = s1;
	ss2 = s2;
	i = 0;
	while ((i < n))
	{
		if (ss2[i] != ss1[i])
		{
			return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
		}
		i++;
	}
	return (0);
}
/*   The memcmp() function returns zero if the two strings are identical, oth-
     erwise returns the difference between the first two differing bytes
     (treated as unsigned char values, so that `\200' is greater than `\0',
     for example).  Zero-length strings are always identical.  This behavior
     is not required by C and portable code should only depend on the sign of
     the returned value.*/