/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:25:45 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:28:31 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ss;
	int		size;

	size = ft_strlen(s1);
	size++;
	ss = malloc(size);
	if (ss == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(ss, s1, size);
	return (ss);
}
