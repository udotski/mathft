/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:19:22 by utersian          #+#    #+#             */
/*   Updated: 2024/12/19 14:28:22 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathft.h"

int	ft_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	result = nb * ft_factorial(nb - 1);
	return (result);
}
