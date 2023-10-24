/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:27:51 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/18 20:27:53 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	t;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size <= i)
		return (j + size);
	while (dst[i])
		i++;
	if (size <= i)
		return (j + size);
	t = i + j;
	j = 0;
	while (src[j] && i < (size - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (t);
}

/*#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char b[0xF] = "nyan !";
	printf("%ld", ft_strlcat(((void*)0), b, 2));
}*/
