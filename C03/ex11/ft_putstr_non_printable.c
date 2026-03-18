/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 10:48:46 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/03 14:33:32 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int main(void)
// {
// 	char	first[] = "Hello\nHow are you?";
// 	char    second[5];

// 	ft_putstr_non_printable(first);

// 	return (0);
// }
