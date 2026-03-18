/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecervant <ecervant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:51:44 by ecervant          #+#    #+#             */
/*   Updated: 2026/03/12 13:16:02 by ecervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*name;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		name = argv[j];
		while (name[i] != 0)
			write(1, &name[i++], 1);
		write(1, "\n", 1);
		j--;
	}
}
