/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:39:59 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:56:50 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	s1;
	size_t	s2;

	s1 = 0;
	if (!*needle || (NULL == haystack && !len))
		return ((char *)haystack);
	while (*(haystack + s1) && s1 < len)
	{
		s2 = 0;
		while (*(haystack + s1 + s2) == *(needle + s2) && (s2 + s1) < len)
		{
			if (0 == *(needle + s2 + 1))
				return ((char *)haystack + s1);
			++s2;
		}
		++s1;
	}
	return (NULL);
}
