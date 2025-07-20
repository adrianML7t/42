/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:17:28 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 13:23:27 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	abs_value_putnbr(int nb, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char			num;
	unsigned int	abs;

	abs = abs_value_putnbr (n, fd);
	num = '0';
	if (abs > 9)
		ft_putnbr_fd (abs / 10, fd);
	num = (abs % 10) + '0';
	write (fd, &num, 1);
}

unsigned int	abs_value_putnbr(int nb, int fd)
{
	unsigned int	abs;

	if (nb < 0)
	{
		abs = nb * -1;
		write(fd, "-", 1);
	}
	else
		abs = nb;
	return (abs);
}

/*el valor MIN_INT (ver man int), puede
ser guardado en una variable unsigned int
para evitar desbordamiento. Para imprimir 
los digitos, recursividad*/