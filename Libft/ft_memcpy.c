/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:14:52 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:23:21 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*sr;
	char		*ds;
	size_t		i;

	i = 0;
	ds = (char *)dst;
	sr = (const char *)src;
	if (sr == 0 && ds == 0)
		return ((char *)0);
	while (i < n)
	{
		*ds = *sr;
		ds++;
		sr++;
		i++;
	}
	return (dst);
}
/*se realiza el casting de void* a char* para
que los punteros se traten como punteros a bytes,
lo que asegura que los datos se copien byte por byte. 
Esto es fundamental para garantizar que la función memcpy personalizada sea
versátil y pueda copiar datos de cualquier tipo.*/
/*ojo, len son bytes. Si quiero copiar enteros, llamo a la 
funcion con su sizeof*/