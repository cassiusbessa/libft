/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:56:10 by caqueiro          #+#    #+#             */
/*   Updated: 2023/10/16 19:57:05 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (512);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_islower('a') == islower('a'));
	printf("%d\n", ft_islower(' ') == islower(' '));
	printf("%d\n", ft_islower('z') == islower('z'));
	printf("%d\n", ft_islower('1') == islower('1'));
	printf("%d\n", ft_islower('@') == islower('@'));
}*/
