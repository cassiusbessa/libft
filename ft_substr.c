/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:51:49 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:52:02 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (i < len)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	i = 0;
	sub = malloc(sizeof (char) * len + 1);
	if (!sub || len <= start)
		return (NULL);
	while (len--)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
