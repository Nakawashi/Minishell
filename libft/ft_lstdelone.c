/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:46:36 by lgenevey          #+#    #+#             */
/*   Updated: 2022/05/31 11:35:36 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Libère la mémoire de l’élément passé en argument en
	utilisant la fonction ’del’ puis avec free(3). La
	mémoire de ’next’ ne doit pas être free

	lst: L’élément à free
	del: L’adresse de la fonction permettant de
	supprimer le contenu de l’élément.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}
