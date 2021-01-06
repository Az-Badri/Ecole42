/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjaclyn <wjaclyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:59:33 by wjaclyn           #+#    #+#             */
/*   Updated: 2020/11/21 19:34:48 by wjaclyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_length(int n)
{
	int				i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	int				len;
	char			*new;
	long	long	nbr;

	nbr = n;
	len = ft_length(n);
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	new[len] = '\0';
	if (nbr < 0)
	{
		new[0] = '-';
		nbr = (-1) * nbr;
	}
	if (nbr == 0)
		new[0] = '0';
	while (nbr)
	{
		--len;
		new[len] = '0' + nbr % 10;
		nbr = nbr / 10;
	}
	return (new);
}
