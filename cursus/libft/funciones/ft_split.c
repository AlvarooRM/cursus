/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvrodr2 <alvrodr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:27:41 by alvrodr2          #+#    #+#             */
/*   Updated: 2025/05/09 10:28:00 by alvrodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int count = 0;
	int i = 0;

	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*malloc_word(const char *s, int start, int len)
{
	char *word = malloc(len + 1);
	if (!word)
		return (NULL);
	for (int i = 0; i < len; i++)
		word[i] = s[start + i];
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i = 0, k = 0, start, len;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);

	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			len = 0;
			while (s[i] && s[i] != c)
			{
				i++;
				len++;
			}
			array[k++] = malloc_word(s, start, len);
		}
	}
	array[k] = NULL;
	return (array);
}
