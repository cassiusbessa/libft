/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:27:19 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:27:21 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (!c)
		return ((char *)&s[i]);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", strchr("oi,bb", 'b') == ft_strchr("oi,bb", 'b'));
	printf("%d\n", strchr("oi,bb", 0) == ft_strchr("oi,bb", 0));
	printf("%d\n", strchr("oi,bb", 'i') == ft_strchr("oi,bb", 'i'));
}*/
