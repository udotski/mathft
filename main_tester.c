/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:43:37 by utersian          #+#    #+#             */
/*   Updated: 2025/05/16 14:51:37 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathft.h"

int	main()
{
	int	i;

	i = -2;
	while (i++ < 5)
	{
		printf("Resultado (sq(%d)): %d\n", i, ft_sq(i));
//		printf("Resultado (is_negative(%d)): \n", i);
//		ft_is_negative(i);
//		printf("\n");
		printf("Resultado (sqrt(%d)): %d \n", i, ft_sqrt(i));
		printf("Resultado (factorial(%d)): %d \n", i, ft_factorial(i));
	}
	return (0);
}
