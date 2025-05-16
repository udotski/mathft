/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 08:53:22 by utersian          #+#    #+#             */
/*   Updated: 2024/12/20 08:53:36 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "mathft.h"

int	ft_sqrt(int nb)
{
	int	ite;
	int	precision;
	int	guess;

	precision = 1;
	guess = nb / 2 + 1;
	if (nb == 0)
		return (0);
	if (nb < 0)
		return (-1);
	ite = 1;
	while ((guess * guess - nb) > precision || (nb - guess * guess) > precision)
	{
		guess = (guess + nb / guess) / 2;
		ite++;
		if (ite > 10000000)
			return (guess);
	}
	if (guess * guess != nb)
		return (guess);
	return (guess);
}
