/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:01:33 by zscekic           #+#    #+#             */
/*   Updated: 2026/03/18 16:38:38 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*dest;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		dest = NULL;
		return (NULL);
	}
	dest = (int *)malloc(sizeof(int) * len);
	if (dest == NULL)
		return (dest);
	while (min < max)
	{
		dest[i] = min;
		min ++;
		i ++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	i;
// 	int	*res;
// 	int	min;
// 	int	max;
// 	int	len;

// 	min = -5;
// 	max = 10;
// 	len = max - min;
// 	i = 0;
// 	res = ft_range(min, max);
// 	while (i < len)
// 	{
// 		printf("%d", res[i]);
// 		i++;
// 	}
// }
