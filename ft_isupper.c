/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:16:18 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:16:20 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (256);
	return (0);
}

/*int	main(void)
{
	printf("%d", isupper('A') == ft_isupper('A'));
	printf("%d", isupper('Z') == ft_isupper('Z'));
	printf("%d", isupper('0') == ft_isupper('0'));
	printf("%d", isupper('@') == ft_isupper('@'));
}*/
