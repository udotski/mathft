/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:00:06 by utersian          #+#    #+#             */
/*   Updated: 2024/10/22 11:06:44 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathft.h"

void	ft_putchar(char c, int fd);

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P', 1);
	else if (n < 0)
		ft_putchar('N', 1);
}
