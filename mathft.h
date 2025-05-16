/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:50:57 by utersian          #+#    #+#             */
/*   Updated: 2025/02/24 16:59:25 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHFT_H
# define MATHFT_H
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <errno.h>

int	ft_factorial(int nb);
void	ft_is_negative(int n);
void	ft_putchar(char c, int fd);
int	*ft_range(int min, int max);
int	ft_sq(int  pot);
int	ft_sqrt(int nb);
int	*ft_range(int min, int max);


#endif
