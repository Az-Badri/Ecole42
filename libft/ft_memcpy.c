/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:05:50 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/12 19:19:21 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr2 = (unsigned char*)dest;
	ptr1 = (unsigned char*)src;
	if (!dest && !src)
		return (0);
	if (n == 0)
		return (dest);
	while (n-- > 0)
	{
		*ptr2 = *ptr1;
		ptr2++;
		ptr1++;
	}
	return (dest);
}
