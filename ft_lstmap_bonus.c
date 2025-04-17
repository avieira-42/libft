/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira- <avieira-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:10:35 by avieira-          #+#    #+#             */
/*   Updated: 2025/04/17 20:18:35 by avieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lsd;
	t_list	*tmp;
	void	*pqvp;

	lsd = NULL;
	while (lst)
	{
		pqvp = f(lst->content);
		tmp = ft_lstnew(pqvp);
		if (!tmp)
		{
			free(pqvp);
			ft_lstclear(&lsd, del);
			return (NULL);
		}
		ft_lstadd_back(&lsd, tmp);
		lst = lst->next;
	}
	return (lsd);
}
