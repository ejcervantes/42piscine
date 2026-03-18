/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:30:29 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/02 11:07:22 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int main(void)
// {
// 	char	*first;
// 	char	second[4];
// 	int		i;

// 	i = 0;
// 	first = "Word";
// 	ft_strcpy(second, first);
// 	while(second[i] != 0)
// 	{
// 		write(1, &second[i], 1);
// 		i++;
// 	}

// 	return (0);
// }
