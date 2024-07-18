/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saflores <saflores@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:07:33 by saflores          #+#    #+#             */
/*   Updated: 2023/11/15 16:53:05 by saflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	sizew;

	sizew = 0;
	while (s[i] != c && s[i])
	{
		sizew++;
		i++;
	}
	return (sizew);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		sizew;
	char	**strs;

	i = 0;
	j = -1;
	strs = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!strs)
		return (NULL);
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		sizew = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, sizew);
		if (!(strs[j]))
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += sizew;
	}
	strs[j] = 0;
	return (strs);
}
