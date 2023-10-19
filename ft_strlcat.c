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

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && j + 1 < size)
		dst[i++] = src[j++];
	dst[i + j] = '\0';
	return (i + j);
}

/*int	main(void)
{
	char dest[10] = "oi ";
	char src[8] = "abc";
	ft_strlcat(dest, src, 3);
	printf("%s", dest);
}*/
