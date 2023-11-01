/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:15:39 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:15:41 by caqueiro         ###   ########.fr       */
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
