/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:24:07 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/03 14:31:40 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
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

// 	i = 230;
// 	first = "LKD²KLDSA";
// 	i = ft_str_is_printable(first);
//     // write(1, &i, 1);
// 	printf("%d", i);

// 	return (0);
// }
