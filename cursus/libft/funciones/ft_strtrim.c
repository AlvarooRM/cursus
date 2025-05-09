/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:59:56 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/05/08 11:50:30 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		final;
	int		i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	final = ft_strlen(s1) - 1;
	while (s1[final] && ft_strchr(set, s1[final]))
		final--;
	if (start > final)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (final - start + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= final)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
