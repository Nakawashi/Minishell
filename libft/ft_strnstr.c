/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:13:58 by lgenevey          #+#    #+#             */
/*   Updated: 2022/07/11 14:09:15 by nakawashi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
