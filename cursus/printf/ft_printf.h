/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:55:15 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/06/02 14:21:32 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	print_format(char c, va_list args);
int	print_char(char c);
int	print_string(char *s);
int	print_int(int n);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned long n, int uppercase);
int	print_pointer(void *ptr);

#endif
