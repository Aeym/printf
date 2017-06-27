/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealrick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:43:59 by ealrick           #+#    #+#             */
/*   Updated: 2016/11/22 16:36:00 by ealrick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				i;
	unsigned int	start;
	size_t			len;
	char			*tmp;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	tmp = (char *)s;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		start++;
		i++;
	}
	if (i == (int)ft_strlen(s))
		return (ft_strdup("\0"));
	if (s == NULL)
		return (tmp);
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	len = i - start + 1;
	return (ft_strsub(tmp, start, len));
}
