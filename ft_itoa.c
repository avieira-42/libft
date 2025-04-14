/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesusoncrack <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:04:46 by jesusoncrack      #+#    #+#             */
/*   Updated: 2025/03/12 02:07:40 by jesusoncrack     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	calculate_length(int nb)
{
	int	i;
	int	value;

	value = 0;
	if (nb == -2147483648)
		return (11);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		value = 1;
	}
	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i + value);
}

char	*populate_array(char *array, int i, int nb)
{
	char	c;

	if (nb > 9)
	{
		populate_array(array, i - 1, nb / 10);
		nb = nb % 10;
	}
	c = '0' + nb;
	array[i] = c;
	return (array);
}

char	*ft_itoa(int nb)
{
	int		length;
	char	*array;

	length = calculate_length(nb);
	if (nb < 0)
		array = malloc(sizeof(char) * (length + 1));
	if (nb == -2147483648)
	{
		nb = nb + 2000000000;
		array[1] = '2';
	}
	if (nb < 0)
	{
		nb = nb * -1;
		array[0] = '-';
	}
	array[length] = '\0';
	populate_array(array, length - 1, nb);
	return (array);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*array;

	while (1)
	{
		scanf(" %i", &i);
		array = ft_itoa(i);
		printf("%s\n", array);
	}
}
