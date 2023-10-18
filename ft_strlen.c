/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:31:06 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/17 15:31:54 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int main(void)
{
  printf("%d", strlen("oi,bb") == ft_strlen("oi,bb"));
  printf("%d", strlen("como vai?") == ft_strlen("como vai?"));
  printf("%d", strlen("vc?") == ft_strlen("vc?"));
  printf("%d", strlen("fica bem") == ft_strlen("fica bem"));
}*/
