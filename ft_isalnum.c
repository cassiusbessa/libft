/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:06:44 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/16 21:06:45 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}

/*int	main(void)
{
	printf("%d", isalnum('a') == ft_isalnum('a'));
	printf("%d", isalnum('z') == ft_isalnum('z'));
	printf("%d", isalnum('A') == ft_isalnum('A'));
	printf("%d", isalnum('Z') == ft_isalnum('Z'));
	printf("%d", isalnum('0') == ft_isalnum('0'));
	printf("%d", isalnum('9') == ft_isalnum('9'));
	printf("%d", isalnum('@') == ft_isalnum('@'));
	printf("%d", isalnum(' ') == ft_isalnum(' '));
}*/
