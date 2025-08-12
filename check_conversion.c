/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:27:05 by codespace         #+#    #+#             */
/*   Updated: 2025/08/12 13:46:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int is_conversion_c(const char *str)
{
	if (*str == '%' && *(str + 1) == 'c')
		return (1);
	return (0);
}

int is_conversion_s(const char *str)
{
	if (*str == '%' && *(str + 1) == 's')
		return (1);
	return (0);
}

int is_conversion_p(const char *str)
{
	if (*str == '%' && *(str + 1) == 'p')
		return (1);
	return (0);
}

int is_conversion_i(const char *str)
{
	if (*str == '%' && *(str + 1) == 'i')
		return (1);
	return (0);
}

int is_conversion_d(const char *str)
{
	if (*str == '%' && (*(str + 1) == 'd' || *(str + 1) == 'i'))
		return (1);
	return (0);
}

int is_conversion_u(const char *str)
{
	if (*str == '%' && *(str + 1) == 'u')
		return (1);
	return (0);
}

int is_conversion_x(const char *str)
{
	if (*str == '%' && *(str + 1) == 'x')
		return (1);
	return (0);
}

int is_conversion_X(const char *str)
{
	if (*str == '%' && *(str + 1) == 'X')
		return (1);
	return (0);
}

int is_conversion_percent(const char *str)
{
	if (*str == '%' && *(str + 1) == '%')
		return (1);
	return (0);
}

int is_conversion(const char *str)
{
	return (is_conversion_c(str) || is_conversion_s(str) ||
			is_conversion_p(str) || is_conversion_d(str) || is_conversion_i(str) ||
			is_conversion_u(str) || is_conversion_x(str) ||
			is_conversion_X(str) || is_conversion_percent(str));
}
