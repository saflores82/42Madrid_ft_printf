/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:38:10 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:09 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	altchar;
	char	*altstr;
	int		i;

	i = 0;
	altstr = (char *)s;
	altchar = c;
	while (altstr[i] != altchar)
	{
		if (altstr[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)altstr + i);
}
