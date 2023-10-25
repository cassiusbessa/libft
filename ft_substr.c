/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:40:43 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/24 15:40:45 by caqueiro         ###   ########.fr       */
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
