/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:49:35 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/10 11:48:41 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	another;

	ptr = (unsigned char*)s;
	another = (unsigned char)c;
	while (n-- > 0)
	{
		if (*ptr == another)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
