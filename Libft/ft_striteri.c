/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:52:39 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:29:07 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len - 1)
	{
		f(i, &s[i]);
		i++;
	}
}

/*funciones autorizadas nada,
pero usar ft_strlen?*/