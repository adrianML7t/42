/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:07:04 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:28:01 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;
	size_t	i;

	i = 0;
	ss = (char *)s;
	while (ss[i] != 0)
	{
		if (ss[i] == (char)c)
		{
			return (&ss[i]);
		}
		i++;
	}
	if ((ss[i] == '\0') && ((char)c == '\0'))
	{
		return (&ss[i]);
	}
	return ((char *)0);
}
