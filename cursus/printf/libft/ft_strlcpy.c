/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:10:10 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/04/30 14:10:14 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i])
		i ++;
	if (size == 0)
		return (i);
	j = 0;
	while (src[j] && j < size - 1)
	{
		dst[j] = src[j];
		j ++;
	}
	dst[j] = '\0';
	return (i);
}
