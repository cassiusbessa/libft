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
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	p;
	int	f;
	
	i = 0;
	p = 0;
	
	while (s[i])
	{
		if(s[i] == c)
		{
			p = i;
			f = 1;
		}
		i++;
	}
	printf("%d\n", f);
	if (!f)
		return (0);
	if (!c)
		return ((char *)&s[i]);
	return ((char *)&s[p]);
}

int	main(void)
{
	/*printf("%d\n", strrchr("oi,bb", 'b') == ft_strrchr("oi,bb", 'b'));
	printf("%d\n", strrchr("oi,bb", 0) == ft_strrchr("oi,bb", 0));*/
	printf("%s\n", ft_strrchr("oi,bb", 'h'));
	//printf("%d\n", strrchr("oi,bb", 'h') == ft_strrchr("oi,bb", 'h'));
}	
