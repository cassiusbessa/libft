/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:12:32 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:12:37 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n)
	{
		((unsigned char *)s)[n - 1] = 0;
		n--;
	}
}

/*int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	ft_bzero(&str[8], 10);
	printf("%s", str);
}*/
