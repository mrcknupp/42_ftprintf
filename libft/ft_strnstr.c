/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodrigo <mrodrigo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 03:36:00 by mrodrigo          #+#    #+#             */
/*   Updated: 2022/06/12 05:51:59 by mrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		k = 0;
		while (s1[i + k] == s2[k] && (i + k) < n)
		{
			if (s1[i + k] == '\0' && s2[k] == '\0')
				return ((char *)&s1[i]);
			k++;
		}
		if (s2[k] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
