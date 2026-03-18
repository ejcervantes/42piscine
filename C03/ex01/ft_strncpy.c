/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 11:08:16 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/04 15:10:38 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char	*first;
// 	char	second[4];
// 	int		i;

// 	i = 0;
// 	first = "Word of";
// 	ft_strncpy(second, first, 10);
// 	while(second[i] != 0)
// 	{
// 		write(1, &second[i], 1);
// 		i++;
// 	}

// 	return (0);
// }
