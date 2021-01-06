/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 10:05:59 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/19 21:05:44 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while (str2[i] && str1[i] && str1[i] == str2[i] && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
