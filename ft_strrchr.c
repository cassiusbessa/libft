/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:30:50 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/18 22:30:52 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		p;
	int			f;

	i = 0;
	p = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			p = i;
			f = 1;
		}
		i++;
	}
	if (!c)
		return ((char *)&s[i]);
	if (!f)
		return (NULL);
	return ((char *)&s[p]);
}

/*int	main(void)
{
	printf("%d\n", strrchr("oi,bb", 'b') == ft_strrchr("oi,bb", 'b'));
	printf("%d\n", strrchr("oi,bb", 0) == ft_strrchr("oi,bb", 0));
	printf("%d\n", strrchr("oi,bb", 'i') == ft_strrchr("oi,bb", 'i'));
}*/
