/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:30:15 by codespace         #+#    #+#             */
/*   Updated: 2025/08/12 14:41:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <assert.h>

int is_conversion_c(const char *str);
int is_conversion_s(const char *str);
int is_conversion_p(const char *str);
int is_conversion_d(const char *str);
int is_conversion_i(const char *str);
int is_conversion_u(const char *str);
int is_conversion_x(const char *str);
int is_conversion_X(const char *str);
int is_conversion_percent(const char *str);
int is_conversion(const char *str);
int put_c(int c);
int put_s(char *s);
int put_p(void *str);
int put_d(int n);
int put_i(int n);
int put_u(unsigned int n);
int put_x(unsigned int n);
int put_X(unsigned int n);
int put_percent(void);
size_t ft_strlen(const char *s);
int ft_printf(const char *format, ...);
