/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:07:41 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:21:50 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ss;
	size_t i;

	i = 0;
	ss = (unsigned char *)s;
	while((ss[i] != 0) && (i < n))
	{
		if(ss[i] == (unsigned char)c)
		{
			return (&ss[i]);
		}
		i++;
	}
	if((ss[i] == '\0') && (c == '\0'))
	{
		return (&ss[i]);
	}
	return ((char *)0);
}*/

/*void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;
	unsigned char	uc;

	ss = (unsigned char *)s;
	i = 0;
	uc = (unsigned char)c;
	while ((i < n) && (ss[i] != '\0'))
	{
		if(ss[i] == uc)
		{
			return (&ss[i]);
		}
		i++;
	}
	if(i < n)
	{
		if((ss[i] == '\0') && (uc == '\0'))
			return (&ss[i]);
	}
	return ((unsigned char *)0);
}*/