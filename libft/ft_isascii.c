/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:01:58 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/10 10:49:41 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int ch)
{
	if ((ch >= 0) && (ch <= 127))
		return (1);
	else
		return (0);
}