/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:53:45 by codespace         #+#    #+#             */
/*   Updated: 2025/08/17 15:01:13 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	put_uintptr(uintptr_t uintptr)
{
	long	div;
	char	c;
	int		written;
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	written = 0;
	div = 1;
	while (uintptr / div >= 16)
		div *= 16;
	while (div > 0)
	{
		c = hex_digits[uintptr / div];
		if (put_c(c) == -1)
			return (-1);
		uintptr %= div;
		div /= 16;
		written++;
	}
	return (written);
}

long	get_digits(long num)
{
	long	div;

	div = 1;
	while (num / div >= 10)
		div *= 10;
	return (div);
}
