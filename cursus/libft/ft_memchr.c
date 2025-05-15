/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:51:24 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/05/05 13:51:28 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*pstr;
	unsigned char	pchar;

	pstr = (unsigned char *)str;
	pchar = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (pstr[i] == pchar)
			return (pstr + i);
		i++;
	}
	return (NULL);
}
