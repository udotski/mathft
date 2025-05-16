/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:21:24 by utersian          #+#    #+#             */
/*   Updated: 2024/12/20 15:18:22 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathft.h"

int	*ft_range(int min, int max)
{
	int	size;
	int	n;
	int	i;
	int	*rangeo;

	if (min >= max)
		return (NULL);
	size = max - min;
	rangeo = (int *) malloc (size * 4);
	if (rangeo == NULL)
		exit (0);
	n = min;
	i = 0;
	while (n < max)
	{
		rangeo[i] = n;
		n++;
		i++;
	}
	return (rangeo);
}
