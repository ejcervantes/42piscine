/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 17:58:08 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/04 15:12:18 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (j < size && src[j] != '\0')
	{
		dest[i] = src[i];
		j++;
	}
	dest[i] = '\0';
	return (i);
}

// int main(void)
// {
// 	char	first[] = "HeLLo WORlD oF 42People";
//  	char    second[];

// 	second = ft_strupcase(first);

// 	// printf("%u\n", ft_strlcpy(second, first, 5));
// 	printf("%s\n", second);

// 	return (0);
// }