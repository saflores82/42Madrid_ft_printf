/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:29:38 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:31 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pointer;
	size_t	leng_s1;
	size_t	leng_s2;

	if (!s1 || !s2)
		return (NULL);
	leng_s1 = ft_strlen(s1);
	leng_s2 = ft_strlen(s2);
	pointer = malloc(leng_s1 + leng_s2 + 1);
	if (!pointer)
		return (NULL);
	ft_memcpy(pointer, s1, leng_s1);
	ft_memcpy(pointer + leng_s1, s2, leng_s2);
	pointer[leng_s1 + leng_s2] = '\0';
	return (pointer);
}
