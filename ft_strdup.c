/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:02:26 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/24 15:02:28 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int	i;

	i = 0;	
	while (dup[i])
		i++;
	i = 0;
	dup = malloc((i * sizeof (char)) + 1);
	if (!dup)
	{
		free(dup);
		return (NULL);
	}
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
