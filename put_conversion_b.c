/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_conversion_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:31:38 by codespace         #+#    #+#             */
/*   Updated: 2025/08/12 15:33:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_u(unsigned int u)
{
	long	div;
	char	c;
	int		written;

	written = 0;
	div = 1;
	while (u / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = '0' + (u / div);
		if (put_c(c) == -1)
			return (-1);
		u %= div;
		div /= 10;
		written++;
	}
	return (written);
}

int	put_x(unsigned int x)
{
	long	div;
	char	c;
	int		written;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	written = 0;
	div = 1;
	while (x / div >= 16)
		div *= 16;
	while (div > 0)
	{
		c = hex_digits[x / div];
		if (put_c(c) == -1)
			return (-1);
		x %= div;
		div /= 16;
		written++;
	}
	return (written);
}

int	put_upper_x(unsigned int X)
{
	long	div;
	char	c;
	int		written;
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	written = 0;
	div = 1;
	while (X / div >= 16)
		div *= 16;
	while (div > 0)
	{
		c = hex_digits[X / div];
		if (put_c(c) == -1)
			return (-1);
		X %= div;
		div /= 16;
		written++;
	}
	return (written);
}

int	put_percent(void)
{
	char	c;

	c = '%';
	return (write(1, &c, 1));
}
