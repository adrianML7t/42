/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:02:55 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:31:11 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*need;

	i = 0;
	j = 0;
	hay = (char *)haystack;
	need = (char *)needle;
	if (needle[0] == '\0')
		return (hay);
	while ((hay[i] != '\0'))
	{
		while ((need[j] != '\0') && (hay[i + j] == need[j]) && ((i + j) < len))
		{
			j++;
		}
		if (need[j] == '\0')
		{
			return (&hay[i]);
		}
		j = 0;
		i++;
	}
	return ((char *)0);
}
