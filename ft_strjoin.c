/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira- <avieira-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:01:41 by avieira-          #+#    #+#             */
/*   Updated: 2025/03/10 14:34:28 by avieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calculate_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i ++;
	}
	len = len + (ft_strlen(sep) * (size -1)) + 1;
	return (len);
}

char	*ft_strcat(char	*dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*array;

	i = 0;
	if (size <= 0)
	{
		array = (char *) malloc(sizeof(char) * 1);
		array[0] = '\0';
		return (array);
	}
	len = calculate_len(size, strs, sep);
	array = (char *) malloc(sizeof(char) * (len));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(array, strs[i]);
		if (i < size - 1)
			ft_strcat(array, sep);
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*sep;
	char	*array;

	sep = "__";
	array = ft_strjoin(argc -1, &argv[1], sep);
	if (array == NULL)
	{
		printf("%c", *array);
	}
	if (argc == 1)
	{
		printf("%c", *array);
	}
	printf("%s", array);
	free(array);
}*/
