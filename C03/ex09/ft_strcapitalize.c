/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:37:23 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/04 15:13:04 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == 32 || i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] == '+' || str[i - 1] == '-')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			if (str[i - 1] != ' ' && i != 0)
				if (str[i - 1] != '+' && str[i - 1] != '-')
					str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	first[] = "HeLLo WORlD oF 42People-juls which are more+more";

// 	// second = ft_strupcase(first);
// 	// write(1, &i, 1);
// 	printf("%s\n", ft_strcapitalize(first));

// 	return (0);
// }
