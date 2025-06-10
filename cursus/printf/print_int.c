/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:46:49 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/06/02 16:04:19 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	long	num;
	char	c;
	int		i;

	num = n;
	i = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		i++;
	}
	if (num >= 10)
		i += print_int(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
	return (i + 1);
}
