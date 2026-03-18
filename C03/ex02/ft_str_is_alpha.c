/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:28:27 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/03 14:28:40 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 'z')
		{
			return (0);
		}
		else if (str[i] < 'A')
		{
			return (0);
		}
		else if (str[i] > 'Z' && str[i] < 'a')
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
// 	first = "jldi";
// 	i = ft_str_is_alpha(first);
// 	printf("%d", i);

// 	return (0);
// }
