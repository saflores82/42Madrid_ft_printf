/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:27:38 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:52:42 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*str_cpy;
	size_t			i;

	i = 0;
	str_cpy = (unsigned char *) str;
	while (i < len)
	{
		str_cpy[i] = (unsigned char)c;
		i++;
	}
	return (str_cpy);
}
