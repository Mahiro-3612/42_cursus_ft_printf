/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conversion_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:30:43 by codespace         #+#    #+#             */
/*   Updated: 2025/08/17 14:22:23 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_conversion_u(const char *str)
{
	if (*str == '%' && *(str + 1) == 'u')
		return (1);
	return (0);
}

int	is_conversion_x(const char *str)
{
	if (*str == '%' && *(str + 1) == 'x')
		return (1);
	return (0);
}

int	is_conversion_upper_x(const char *str)
{
	if (*str == '%' && *(str + 1) == 'X')
		return (1);
	return (0);
}

int	is_conversion_percent(const char *str)
{
	if (*str == '%' && *(str + 1) == '%')
		return (1);
	return (0);
}

int	is_conversion(const char *str)
{
	return (is_conversion_c(str) || is_conversion_s(str)
		|| is_conversion_p(str) || is_conversion_d(str)
		|| is_conversion_i(str) || is_conversion_u(str)
		|| is_conversion_x(str) || is_conversion_upper_x(str)
		|| is_conversion_percent(str));
}
