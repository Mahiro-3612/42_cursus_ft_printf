/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_conversion_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:48:15 by codespace         #+#    #+#             */
/*   Updated: 2025/08/12 15:34:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_c(int c)
{
	char	ch;

	ch = (char)c;
	return (write(1, &ch, 1));
}

int	put_s(char *s)
{
	if (s == NULL)
		return (put_s("(null)"));
	return (write(1, s, ft_strlen(s)));
}

int	put_p(void *p)
{
	uintptr_t	addr;
	int			written_a;
	int			written_b;

	if (p == NULL)
		return (put_s("(nil)"));
	addr = (uintptr_t)(p);
	written_a = put_s("0x");
	if (written_a < 0)
		return (written_a);
	written_b = put_uintptr(addr);
	if (written_b < 0)
		return (written_b);
	return (written_a + written_b);
}

int	put_i(int i)
{
	long	num;
	long	div;
	char	c;
	int		written;

	written = 0;
	num = (long)i;
	if (num < 0)
	{
		if (put_c('-') == -1)
			return (-1);
		num *= -1;
		written++;
	}
	div = 1;
	while (num / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = '0' + (num / div);
		if (put_c(c) == -1)
			return (-1);
		num %= div;
		div /= 10;
		written++;
	}
	return (written);
}

int	put_d(int d)
{
	long	num;
	long	div;
	char	c;
	int		written;

	written = 0;
	num = (long)d;
	if (num < 0)
	{
		if (put_c('-') == -1)
			return (-1);
		num *= -1;
		written++;
	}
	div = 1;
	while (num / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = '0' + (num / div);
		if (put_c(c) == -1)
			return (-1);
		num %= div;
		div /= 10;
		written++;
	}
	return (written);
}
