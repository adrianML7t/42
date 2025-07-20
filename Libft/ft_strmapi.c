/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:51:30 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:30:22 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char	*fstring;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s) + 1;
	fstring = malloc(len);
	if (fstring == NULL)
		return (NULL);
	while (i < len - 1)
	{
		fstring[i] = f(i, s[i]);
		i++;
	}
	fstring[i] = '\0';
	return (fstring);
}
