/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:16:09 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:52:31 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;

	pointer1 = (unsigned char *)s1;
	pointer2 = (unsigned char *)s2;
	while (n--)
	{
		if (*pointer1 != *pointer2)
			return (*pointer1 - *pointer2);
		pointer1++;
		pointer2++;
	}
	return (0);
}
