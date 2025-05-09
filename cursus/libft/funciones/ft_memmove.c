/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:11:53 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/04/30 14:11:57 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const unsigned char	*psrc;
	unsigned char		*pdest;
	size_t				i;

	psrc = (const unsigned char *)src;
	pdest = (unsigned char *)dest;
	if (!src && !dest)
		return (NULL);
	if (psrc < pdest)
	{
		while (count--)
		{
			pdest[count] = psrc[count];
		}
	}
	else
	{
		i = 0;
		while (i < count)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
