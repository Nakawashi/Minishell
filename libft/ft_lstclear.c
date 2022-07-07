/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:53:50 by lgenevey          #+#    #+#             */
/*   Updated: 2022/05/30 19:45:15 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Supprime et libère la mémoire de l’élément passé en
	paramètre, et de tous les éléments qui suivent, à
	l’aide de ’del’ et de free(3)
	Enfin, le pointeur initial doit être mis à NULL.

	lst: L’adresse du pointeur vers un élément.
	del: L’adresse de la fonction permettant de
	supprimer le contenu d’un élément.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst)
	{
		while (*lst)
		{
			next_node = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = next_node;
		}
	}
}
