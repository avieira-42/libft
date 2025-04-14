/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira- <avieira-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:52:15 by avieira-          #+#    #+#             */
/*   Updated: 2025/04/14 20:07:43 by avieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			len_s;
	unsigned char	*str;
	char			*substr;

	i = 0;
	len_s = ft_strlen(s);
	str = (unsigned char *) s;
	substr = malloc (len +1);
	if (!substr)
		return (0);
	while (i < len && i < len_s - 1)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
