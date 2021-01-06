/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:35:57 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/10 09:44:39 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char*)str;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}
