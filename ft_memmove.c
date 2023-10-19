/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:04:06 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/18 15:04:12 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
		return (dest);
	}
	else
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
		return (dest);
	}
}

/*int	main(void)
{
	char src[10] = "GeeksForMy";
	char src2[13] = "GeeksForGeeks";
	ft_memmove(src + 2, src, 8);
	printf("%s\n", src);
	memmove(src2 + 2, src2, 10);
	printf("%s\n", src2);
}*/
