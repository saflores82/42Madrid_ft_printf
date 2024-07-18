/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:38:25 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:34 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_leng;
	size_t	src_leng;

	src_leng = ft_strlen(src);
	if (NULL == dst && 0 == dstsize)
		return (src_leng);
	dest_leng = ft_strlen(dst);
	if (dest_leng >= dstsize)
		return (src_leng + dstsize);
	else
		dstsize -= dest_leng;
	ft_strlcpy(dst + dest_leng, src, dstsize);
	return (dest_leng + src_leng);
}
