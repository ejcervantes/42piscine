/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:35:43 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/03 14:30:05 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char	first[] = "Hello World";

// 	// second = ft_strupcase(first);
// 	// write(1, &i, 1);
// 	printf("%s\n", ft_strlowcase(first));

// 	return (0);
// }
