/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:51:38 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:51:48 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_arr(char *x, unsigned int num, long int leng)
{
	while (num > 0)
	{
		x[leng--] = 48 + (num % 10);
		num = num / 10;
	}
	return (x);
}

static long int	ft_leng(int n)
{
	int					leng;

	leng = 0;
	if (n <= 0)
		leng = 1;
	while (n != 0)
	{
		leng++;
		n = n / 10;
	}
	return (leng);
}

char	*ft_itoa(int n)
{
	char				*x;
	long int			leng;
	unsigned int		num;

	leng = ft_leng(n);
	x = (char *)malloc(sizeof(char) * (leng + 1));
	if (!(x))
		return (NULL);
	x[leng--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		num = n * -1;
		x[0] = '-';
	}
	else
		num = n;
	x = ft_arr(x, num, leng);
	return (x);
}
