/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:41:28 by ealrick           #+#    #+#             */
/*   Updated: 2016/12/01 15:17:07 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	len2;

	if (!*lit)
		return ((char *)big);
	len2 = ft_strlen((char*)lit);
	while (*big && (len-- >= len2))
	{
		if (*big == *lit && ft_memcmp(big, lit, len2) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
