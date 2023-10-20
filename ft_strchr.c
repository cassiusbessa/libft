/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:55:24 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/19 17:55:25 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	int			f;

	f = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
			f = 1;
		}
		i++;
	}
	if (!f)
		return (0);
	return ((char *)&s[i]);
}

/*int	main(void)
{
	printf("%d\n", strchr("oi,bb", 'b') == ft_strchr("oi,bb", 'b'));
	printf("%d\n", strchr("oi,bb", 0) == ft_strchr("oi,bb", 0));
	printf("%d\n", strchr("oi,bb", 'i') == ft_strchr("oi,bb", 'i'));
}*/
