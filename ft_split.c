/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira- <avieira-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:11:01 by avieira-          #+#    #+#             */
/*   Updated: 2025/04/16 19:32:11 by avieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static void	ft_freearray(char **array)
{
	while (*array)
		free(*(array++));
	free(array);
}

static void	ft_stringa_mos(char **array, char const *s, char c, int words)
{
	int		i;
	int		start;
	int		len;

	i = 0;
	start = 0;
	while (words--)
	{
		len = 0;
		while (s[start] == c && s[start + len])
			start++;
		while (s[start + len] != c && s[start + len])
			len++;
		array[i] = ft_substr(s, start, len);
		if (array[i] == NULL)
			ft_freearray(array);
		start += len + 1;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	array = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!array)
		return (NULL);
	ft_stringa_mos(array, s, c, words);
	return (array);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void) argc;
	char	**array;

	array = ft_split(argv[1], argv[2][0]);
	while (*array)
		printf("%s", *array++);
}*/
