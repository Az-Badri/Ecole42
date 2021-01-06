/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:51:58 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/25 19:08:18 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	temp = (void*)malloc(nmemb * size);
	if (!temp)
		return (0);
	if (temp)
		temp = ft_memset(temp, 0, nmemb * size);
	return (temp);
}
