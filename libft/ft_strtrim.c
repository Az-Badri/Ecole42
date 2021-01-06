/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:41:03 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/25 22:30:32 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char				*new;
	unsigned int		finish;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	finish = ft_strlen(s1);
	while (finish > 0 && s1[finish - 1] && ft_strchr(set, s1[finish - 1]))
		finish--;
	new = ft_substr(s1, 0, finish);
	if (new == NULL)
		return (new);
	new[finish] = '\0';
	return (new);
}
