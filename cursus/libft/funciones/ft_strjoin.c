/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:55:21 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/05/07 16:19:37 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;

	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}
