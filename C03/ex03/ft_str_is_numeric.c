/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:31:17 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/03 14:28:43 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char	*first;
// 	char	second[4];
// 	int		i;

// 	i = 0;
// 	first = "";
// 	i = ft_str_is_numeric(first);
// 	printf("%d", i);

// 	return (0);
// }
