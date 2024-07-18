/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:27:11 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:50:54 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str_cpy;
	size_t	i;

	i = 0;
	str_cpy = (char *) s;
	while (i < n)
	{
		str_cpy[i] = 0;
		i++;
	}
}
