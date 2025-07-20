/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:19:25 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:40:06 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*return_empty_string(void);
int		check_set(char const c, char const *set, int set_len);
char	*return_trimmed_string(char const *s1, int trim_size, int first);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		first;
	int		last;
	int		trim_size;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (check_set(s1[i], set, ft_strlen(set)))
		i++;
	if (s1[i] == '\0')
	{
		trimmed = return_empty_string();
		return (trimmed);
	}
	first = i;
	i = ft_strlen(s1) - 1;
	while (check_set(s1[i], set, ft_strlen(set)))
		i--;
	last = i;
	trim_size = last - first + 1;
	trimmed = return_trimmed_string(s1, trim_size, first);
	return (trimmed);
}

int	check_set(char const c, char const *set, int set_len)
{
	int	i;

	i = 0;
	while (i < set_len)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*return_empty_string(void)
{
	char	*empty;

	empty = malloc (1);
	if (!empty)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

char	*return_trimmed_string(char const *s1, int trim_size, int first)
{
	char	*trimmed;

	trimmed = malloc(trim_size + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &s1[first], trim_size + 1);
	return (trimmed);
}

/*nota: trim size es la palabra recortada, pero hay que reservar +1
para incluir el caracter nulo al final de la string*/