/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 13:53:21 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/26 18:36:00 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*newstr;

// 	newstr = "LOL dnskalnl nodnsal";
// 	ft_putstr(newstr);
// 	return (0);
// }
