/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmart2 <adrmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:19:14 by adrmart2          #+#    #+#             */
/*   Updated: 2023/10/27 21:21:22 by adrmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		calc_length(int n);
int		get_abs(int n, int *neg);

char	*ft_itoa(int n)
{
	char	*snum;
	int		end;
	int		len;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	len = calc_length(n) + 1;
	snum = malloc (len);
	if (snum == NULL)
		return (NULL);
	end = len - 2;
	n = get_abs(n, &neg);
	while (end >= 0)
	{
		snum [end] = '0' + (n % 10);
		n = n / 10;
		end--;
	}
	if (neg == 1)
		snum[0] = '-';
	snum [len - 1] = '\0';
	return (snum);
}

int	calc_length(int n)
{
	int	length;

	length = 1;
	if (n < 0)
	{
		length++;
	}
	while ((n / 10) != 0)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

int	get_abs(int n, int *neg)
{
	if (n < 0)
	{
		n = n * -1;
		*neg = 1;
	}
	return (n);
}
