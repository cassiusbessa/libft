/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:21:06 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:21:09 by caqueiro         ###   ########.fr       */
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
	//char src[10] = "GeeksForMy";
	char src2[5] = "Hello";
	ft_memmove(src2, src2 + 2, 5);
	printf("%s\n", src2);
	//memmove(src2 + 2, src2, 10);
}*/
