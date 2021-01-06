/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:29:08 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/13 21:54:02 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			k;
	unsigned char	*ptr2;
	unsigned char	*ptr1;

	ptr2 = (unsigned char*)dest;
	ptr1 = (unsigned char*)src;
	k = 0;
	while (n > k)
	{
		ptr2[k] = ptr1[k];
		if (ptr1[k] == (unsigned char)c)
			return ((void*)(dest + k + 1));
		k++;
	}
	return (NULL);
}
