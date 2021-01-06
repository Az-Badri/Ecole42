/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 11:50:11 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/16 22:25:12 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < l)
	{
		k = 0;
		if (big[i] == little[k])
		{
			while (little[k] && k + i < l && little[k] == big[i + k])
				k++;
			if (little[k] == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
