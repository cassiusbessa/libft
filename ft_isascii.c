/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:15:11 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:15:14 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(void)
{
	printf("%d", isascii('a') == ft_isascii('a'));
	printf("%d", isascii(0) == ft_isascii(0));
	printf("%d", isascii('@') == ft_isascii('@'));
	printf("%d", isascii('3') == ft_isascii('3'));
}*/
