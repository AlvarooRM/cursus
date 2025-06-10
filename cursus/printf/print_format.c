/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:52:48 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/06/02 14:33:45 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char c, va_list args)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	if (c == 's')
		return (print_string(va_arg(args, char *)));
	if (c == 'p')
		return (print_pointer(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (print_int(va_arg(args, int)));
	if (c == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	if (c == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	if (c == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}
