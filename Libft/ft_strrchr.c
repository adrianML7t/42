/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:33:01 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:31:50 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	int		i;

	i = ft_strlen(s);
	ss = (char *)s;
	while (i >= 0)
	{
		if (ss[i] == (char)c)
			return (&ss[i]);
		i--;
	}
	i++;
	if ((ss[i] == '\0') && (c == 0))
		return (&ss[i]);
	return ((char *)0);
}
