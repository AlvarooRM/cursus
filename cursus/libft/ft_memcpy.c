/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:19:35 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/04/29 14:19:37 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (count--)
	{
		*ptr++ = *ptr2++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char dest[] = "hola buenas";
	char src[] = "que tal estas";

	printf("%s\n",(char*)ft_memcpy(dest, src, sizeof(src)));
}*/
