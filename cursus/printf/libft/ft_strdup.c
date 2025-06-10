/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 09:51:54 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/05/07 10:43:07 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		len;
	char	*copy;

	len = ft_strlen(string) + 1;
	copy = malloc(len * sizeof(char));
	if (copy != NULL)
		copy = ft_memcpy(copy, string, len);
	return (copy);
}
