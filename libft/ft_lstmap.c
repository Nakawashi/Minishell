/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:45:44 by lgenevey          #+#    #+#             */
/*   Updated: 2022/05/30 19:54:56 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	Itère sur la liste ’lst’ et applique la fonction
	’f ’au contenu de chaque élément. Crée une nouvelle
	liste résultant des applications successives de
	’f’. La fonction ’del’ est là pour détruire le
	contenu d’un élément si nécessaire.

	lst: L’adresse du pointeur vers un élément.
	f: L’adresse de la fonction à appliquer.
	del: L’adresse de la fonction permettant de
	supprimer le contenu d’un élément

	retourne la nouvelle liste
	NULL si l'allocation echoue

	By: mabbas <mabbas@student.42.fr>
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*result_node;

	result_node = NULL;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&result_node, new_list);
		lst = lst->next;
	}
	return (result_node);
}
