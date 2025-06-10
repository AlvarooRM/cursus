/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:45:55 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/04/30 11:59:37 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len--)
	{
		*ptr++ = c;
	}
	return (b);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "hola buenas tardes";

	printf("%s\n",(char*)ft_memset(str, '$', 5));



}*/
