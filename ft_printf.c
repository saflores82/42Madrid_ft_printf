/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 08:48:03 by saflores          #+#    #+#             */
/*   Updated: 2024/07/24 10:06:31 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(const char type, va_list vargs)
{
	if (type == 'c')
		return (ft_putchar(va_arg(vargs, int)));
	else if (type == 'u')
		return (ft_putnbr(va_arg(vargs, unsigned int)));
	else if ((type == 'i') || (type == 'd'))
		return (ft_putnbr(va_arg(vargs, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(vargs, char *)));
	else if (type == 'x' || type == 'X')
		return (ft_putnbr_hexa(va_arg(vargs, unsigned int), type));
	else if (type == 'p')
		return (ft_putptr(va_arg(vargs, void *)));
	else
		return (ft_putchar('%'));
}

int	ft_printf(char const *str, ...)
{
	va_list	vargs;
	int		len;
	int		check;

	va_start(vargs, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			check = ft_conversion(*(++str), vargs);
			if (check == -1)
				return (-1);
			len += check;
		}
		else
		{
			if (write(1, str, 1) == -1)
				return (-1);
			len++;
		}
		str++;
	}
	va_end(vargs);
	return (len);
}
