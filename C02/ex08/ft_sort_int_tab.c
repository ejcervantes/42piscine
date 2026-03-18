/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:15:40 by ecervant          #+#    #+#             */
/*   Updated: 2026/02/26 18:36:20 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	temp;

	count = 0;
	while (count < size)
	{
		count2 = 0;
		while (count2 < size - 1)
		{
			if (tab[count2] > tab[count2 + 1])
			{
				temp = tab[count2];
				tab[count2] = tab[count2 + 1];
				tab[count2 + 1] = temp;
			}
			count2++;
		}
		count++;
	}
}

// int	main(void)
// {
// 	int	arr[5] = {10, 92, 35, 47, 25};
// 	int	len;
// 	int	*parr;
// 	int	i;

// 	parr = arr;
// 	len = 5;
// 	ft_sort_int_tab(parr, len);
// 	for (i = 0; i < 5; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}
// 	return (0);
// }
