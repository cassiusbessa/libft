/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caqueiro <caqueiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:13:31 by caqueiro          #+#    #+#             */
/*   Updated: 2023/11/01 15:13:35 by caqueiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) || (c >= 48 && c <= 57))
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
