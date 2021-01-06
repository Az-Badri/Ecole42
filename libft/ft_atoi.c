/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:22:42 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/20 18:04:29 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					flag;
	unsigned long		convert;

	flag = 1;
	convert = 0;
	if (*str == '\0')
		return (0);
	while ((*str == ' ') || (*str == '\n') || (*str == '\r') || (*str == '\f')
	|| (*str == '\t') || (*str == '\v'))
		str++;
	if (*str == '-')
		flag = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str <= 57 && *str >= 48)
	{
		convert = convert * 10 + ((unsigned char)*str - '0');
		if ((convert > 9223372036854775806) && (flag > 0))
			return (-1);
		if ((convert > 9223372036854775807) && (flag < 0))
			return (0);
		str++;
	}
	return ((int)(convert * flag));
}
