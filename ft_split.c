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
	char	**split;
	int	q;
	int	ex;
	int	skip;
	int	i;

	if (!s)
		return (NULL);
	q = count_big_array(s, c);
	ex = 0;
	i = 0;
	split = ft_calloc(q, sizeof (char *));
	if (!split)
		return (NULL);
	while (q && s[i])
	{
		if (s[i] != c)
		{
			skip = count_little_array(&s[i], c);
			split[ex] = ft_substr(&s[i], 0, skip);
			if (!split[ex])
			{
				free(split[ex]);
				return (NULL);
			}
			i = i + skip;
			q--;
			ex++;
			continue ;
		}
		i++;
	}
	return (split);
}

/*int	main(void)
{
	int	i = 0;
	char	**split = ft_split("        oi,bb", ' ');
	while (i < 1)
	{
		printf("%s", split[i]);
		i++;
	}
	free(split);
}*/
