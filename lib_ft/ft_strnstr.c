/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 03:05:31 by rpol              #+#    #+#             */
/*   Updated: 2021/12/01 03:31:37 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lens1;
	size_t	lens2;

	j = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (lens2 == 0)
		return ((char *)s1);
	while (j < len && s1[j])
	{
		i = 0;
		while ((s1[j + i] == s2[i]) && (i + j < len) && s2[i] && s1[i + j])
		{
			if (i == lens2 - 1)
				return ((char *)(s1 + j));
			i++;
		}
		j++;
	}
	return (NULL);
}
