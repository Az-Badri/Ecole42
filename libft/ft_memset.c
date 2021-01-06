/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 10:07:48 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/10 13:35:20 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char*)str;
	i = 0;
	while (n > 0)
	{
		ptr[i] = c;
		n--;
		i++;
	}
	return (str);
}
