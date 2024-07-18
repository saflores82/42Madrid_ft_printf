/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:14:57 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:52:28 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*primary;

	primary = (unsigned char *)s;
	while (n--)
	{
		if (*primary == (unsigned char)c)
			return (primary);
		primary++;
	}
	return (NULL);
}
