/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:09:38 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:46 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*spointer;
	int		index;

	if (!s || !f)
		return (NULL);
	spointer = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(spointer))
		return (NULL);
	index = 0;
	while (s[index])
	{
		spointer[index] = f(index, s[index]);
		++index;
	}
	spointer[index] = '\0';
	return (spointer);
}
