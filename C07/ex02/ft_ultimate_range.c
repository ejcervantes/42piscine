/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zscekic <zscekic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:19:58 by zscekic           #+#    #+#             */
/*   Updated: 2026/03/17 12:44:27 by zscekic          ###   ########.fr       */
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
		return (NULL);
	}
	dest = (int *)malloc(sizeof(int) * len);
	if (dest == NULL)
		return (0);
	while (min < max)
	{
		dest[i] = min;
		min ++;
		i ++;
	}
	return (dest);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (range == NULL)
		return (-1);
	if (min >= max)
	{
		return (0);
	}
	return (max - min);
}

// int	main(void)
// {
// 	int	i;
// 	int	res;
// 	int	*range;

// 	i = 0;
// 	res = ft_ultimate_range(&range, 0, 10);
// 	while (i < res)
// 	{
// 		printf("%d", range[i]);
// 		i++;
// 	}
// 	printf("\n%d", res);
// }
