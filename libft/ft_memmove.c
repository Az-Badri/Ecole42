/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:19:13 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/23 22:25:57 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	ptr_d = (unsigned char*)dest;
	ptr_s = (unsigned char*)src;
	if (!dest && !src)
		return (0);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		ptr_d[n - 1] = ptr_s[n - 1];
		n--;
	}
	return (ptr_d);
}
