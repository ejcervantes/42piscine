/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:44:14 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/03 14:29:57 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
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
// 	printf("%s\n", ft_strupcase(first));

// 	return (0);
// }
