/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:16:23 by codespace         #+#    #+#             */
/*   Updated: 2025/08/17 14:22:45 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_format(const char *format)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (is_conversion(format))
		{
			count += 1;
			format += 2;
			continue ;
		}
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		written;
	int		put;

	if (format == NULL)
		return (-1);
	count = count_format(format);
	written = 0;
	va_start(ap, format);
	while (*format)
	{
		if (!is_conversion(format))
		{
			if (write(1, format, 1) == -1)
				return (-1);
			written++;
			format++;
		}
		else if (count > 0)
		{
			if (is_conversion_c(format))
				put = put_c(va_arg(ap, int));
			else if (is_conversion_s(format))
				put = put_s(va_arg(ap, char *));
			else if (is_conversion_p(format))
				put = put_p(va_arg(ap, void *));
			else if (is_conversion_d(format))
				put = put_d(va_arg(ap, int));
			else if (is_conversion_i(format))
				put = put_i(va_arg(ap, int));
			else if (is_conversion_u(format))
				put = put_u(va_arg(ap, unsigned int));
			else if (is_conversion_x(format))
				put = put_x(va_arg(ap, unsigned int));
			else if (is_conversion_upper_x(format))
				put = put_upper_x(va_arg(ap, unsigned int));
			else if (is_conversion_percent(format))
				put = put_percent();
			if (put < 0)
				return (-1);
			written += put;
			count--;
			format += 2;
		}
	}
	va_end(ap);
	return (written);
}

// int main(void)
// {
// 	char *a = "hi";
// 	char *b = NULL;
// 	int  *c = 0;
// 	int  *d = 0;

// 	printf(" NULL %s NULL \n", b);
// 	ft_printf(" NULL %s NULL \n", b);
// 	printf(" %p %p \n", c, d);
// 	ft_printf(" %p %p \n", c, d);
// 	printf("%p\n", a);
// 	ft_printf("%p\n", a);
// 	assert(printf("dfsds%ckdfk%c\n", '1', '2')
// 		== ft_printf("dfsds%ckdfk%c\n", '1', '2'));
// 	return (0);
// }
