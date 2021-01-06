/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:23:45 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/19 21:06:23 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if ((*s) == (char)c)
			return ((char *)s);
		len--;
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	return (0);
}
