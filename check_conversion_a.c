/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conversion_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:27:05 by codespace         #+#    #+#             */
/*   Updated: 2025/08/17 15:34:54 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_conversion_c(const char *str)
{
	if (*str == '%' && *(str + 1) == 'c')
		return (1);
	return (0);
}

int	is_conversion_s(const char *str)
{
	if (*str == '%' && *(str + 1) == 's')
		return (1);
	return (0);
}

int	is_conversion_p(const char *str)
{
	if (*str == '%' && *(str + 1) == 'p')
		return (1);
	return (0);
}

int	is_conversion_i(const char *str)
{
	if (*str == '%' && *(str + 1) == 'i')
		return (1);
	return (0);
}

int	is_conversion_d(const char *str)
{
	if (*str == '%' && *(str + 1) == 'd')
		return (1);
	return (0);
}
