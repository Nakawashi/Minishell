/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:41:25 by lgenevey          #+#    #+#             */
/*   Updated: 2022/05/30 19:45:13 by lgenevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Itère sur la liste ’lst’ et applique la fonction
	’f’ au contenu chaque élément.

	lst: L’adresse du pointeur vers un élément.
	f: L’adresse de la fonction à appliquer.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
