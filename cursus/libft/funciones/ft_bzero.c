/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:51:14 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/04/30 12:00:58 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "hola hola que tal";
	ft_bzero(str, 4);

	printf("%i\n", str[2]);
}
*/
