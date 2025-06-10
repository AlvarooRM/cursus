/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:40:17 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/06/02 16:04:01 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + print_hex((unsigned long)ptr, 0));
}
