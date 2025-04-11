/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira- <avieira-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:04:01 by avieira-          #+#    #+#             */
/*   Updated: 2025/04/11 16:27:19 by avieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s + ft_strlen(s) + 1;
	while (ptr != (char *) s - 1)
	{	
		if (*ptr == c)
			return (ptr);
		ptr--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s", ft_strrchr(argv[1], 'r'));
}*/
