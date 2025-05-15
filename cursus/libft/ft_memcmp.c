/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:31:29 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/05/05 15:31:30 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t				i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = buf1;
	s2 = buf2;
	if (count == 0)
		return (0);
	i = 0;
	while ((i < count - 1) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
