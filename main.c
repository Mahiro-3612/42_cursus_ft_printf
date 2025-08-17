/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:45:18 by msakurai          #+#    #+#             */
/*   Updated: 2025/08/17 16:23:51 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char a = 'a';

	assert(printf("%c%s%s%s%p%p%d%i%u%x%X%%\n", '\0', "", (char *)NULL, "\0", NULL, (void *)0, 0, 0, 0, 0, 0)
	== ft_printf("%c%s%s%s%p%p%d%i%u%x%X%%\n", '\0', "", (char *)NULL, "\0", NULL, (void *)0, 0, 0, 0, 0, 0));
	assert(printf("Character: %c\n", 'A') == ft_printf("Character: %c\n", 'A'));
	assert(printf("String: %s\n", "Hello, World!") == ft_printf("String: %s\n", "Hello, World!"));
	assert(printf("Pointer: %p\n", &a) == ft_printf("Pointer: %p\n", &a));
	assert(printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN) == ft_printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN));
	assert(printf("INT_MAX: %i, INT_MIN: %i\n", INT_MAX, INT_MIN) == ft_printf("INT_MAX: %i, INT_MIN: %i\n", INT_MAX, INT_MIN));
	assert(printf("UINT_MAX: %u\n", UINT_MAX) == ft_printf("UINT_MAX: %u\n", UINT_MAX));
	assert(printf("Hexadecimal: %x, Uppercase Hexadecimal: %X\n", 255, 255) == ft_printf("Hexadecimal: %x, Uppercase Hexadecimal: %X\n", 255, 255));
	assert(printf("Percent sign: %%\n") == ft_printf("Percent sign: %%\n"));
	return (0);
}
