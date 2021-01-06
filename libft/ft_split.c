/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 19:11:00 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/24 19:11:55 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	words_count(const char *str, char c)
{
	int			words;
	int			i;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

static	char	**free_up_memory(char **str)
{
	int			k;

	k = 0;
	while (str[k])
	{
		free(str[k]);
		k++;
	}
	free(str);
	return (NULL);
}

static int		len(char const *s, char c, int i)
{
	int			j;

	j = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

char			**ft_innner_search(char const *str, char c, int k, int w_number)
{
	char		**new;
	int			i;

	i = 0;
	if (!(new = (char**)malloc(sizeof(char*) * (w_number + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i] && str[i] == c)
			i++;
		else if (str[i] && str[i] != c)
		{
			if (!(new[k] = ft_substr(str, i, len(str, c, i))))
				return (free_up_memory(new));
			i = i + len(str, c, i);
			k++;
		}
	}
	new[k] = NULL;
	return (new);
}

char			**ft_split(char const *str, char c)
{
	int			k;
	int			w_number;
	char		**new;

	k = 0;
	if (!str)
		return (NULL);
	w_number = words_count(str, c);
	new = ft_innner_search(str, c, k, w_number);
	return (new);
}
