/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:48:30 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/27 15:18:30 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

static int	count_big_array(char const *s, char c)
{
	printf("entrie aqui");
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count + 1);	
		
}

static int	count_little_array(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	printf("entrie aqui");
	char	*t;
	char	**split;
	int	q;
	int	ex;
	int	skip;
	int	i;

	t = ft_strtrim(s, &c);
	q = count_big_array(t, c);
	ex = 0;
	i = 0;
	split = ft_calloc(q, sizeof (char *));
	while (q && t[i])
	{
		if (t[i] != c)
		{
			skip = count_little_array(&t[i], c);
			split[ex] = ft_substr(&t[i], 0, skip);
			i = i + skip;
			q--;
			ex++;
			continue ;
		}
		i++;
	}
	free(t);
	return (split);
}

int	main(void)
{
	printf("maiiiiiiiin");
	int	i = 0;
	char	**split = ft_split("        oi,bb", ' ');
	
	//printf("%s", split[0]);
	/*while (i < 1)
	{
		printf("%s", split[i]);
		i++;
	}*/
	free(split);
}
