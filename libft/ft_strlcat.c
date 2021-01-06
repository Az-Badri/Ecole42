/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:18:01 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/19 20:53:27 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	int				len1;

	i = 0;
	len1 = ft_strlen(dst);
	if (!size)
		return (ft_strlen(src));
	if (ft_strlen(dst) > size - 1)
		return (size + ft_strlen(src));
	while (i + len1 < (size - 1) && src[i] != '\0')
	{
		dst[i + len1] = src[i];
		i++;
	}
	dst[i + len1] = '\0';
	return (len1 + ft_strlen(src));
	return (0);
}
