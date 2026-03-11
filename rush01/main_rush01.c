/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estebancervantes <estebancervantes@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 00:35:24 by estebancerv       #+#    #+#             */
/*   Updated: 2026/03/11 20:45:52 by estebancerv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	validation_rep(int **grid, int size, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (grid[i][col] == num && i != row)
			return (0);
		if (grid[row][i] == num && i != col)
			return (0);
		i++;
	}
	return (1);
}

int validation_view(int *line, int size)
{
	int	fixed;
	int	compare;
	int	count;

	fixed = 0;
	count = 1;
	compare = fixed + 1;
	while (compare < size)
	{
		if (line[fixed] < line[compare])
		{
			count++;
			fixed = compare;
		}
		compare++;
	}
	return count;
}

int *validation_view1(int **grid, int size)
{
	int	i;
	int	j;
	int	col[size];
	int *views = malloc(sizeof(int) * size);

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			col[j] = grid[j][i];
			j++;
		}
		views[i] = validation_view(col, size);
		i++;
	}
	return (views);
}

int *validation_view2(int **grid, int size)
{
	int	i;
	int	j;
	int	col[size];
	int *views = malloc(sizeof(int) * size);

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			col[j] = grid[i][size - j - 1];
			j++;
		}
		views[i] = validation_view(col, size);
		i++;
	}
	return (views);
}

int *validation_view3(int **grid, int size)
{
	int	i;
	int	j;
	int	col[size];
	int *views = malloc(sizeof(int) * size);

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			col[j] = grid[i][j];
			j++;
		}
		views[i] = validation_view(col, size);
		i++;
	}
	return (views);
}

int *validation_view4(int **grid, int size)
{
	int	i;
	int	j;
	int	col[size];
	int *views = malloc(sizeof(int) * size);

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			col[j] = grid[size - j - 1][i];
			j++;
		}
		views[i] = validation_view(col, size);
		i++;
	}
	return (views);
}

int	validation_rules(int **grid, int **input, int size)
{
	int	*v1;
	int	*v2;
	int	*v3;
	int	*v4;
	int	i = 0;
	int res = 1;

	v1 = validation_view1(grid, size);
	v2 = validation_view2(grid, size);
	v3 = validation_view3(grid, size);
	v4 = validation_view4(grid, size);
	while (i < size)
	{
		if (v1[i] != input[0][i] || v2[i] != input[1][i] || v3[i] != input[2][i] || v4[i] != input[3][i])
		{
			res = 0;
			break;
		}
		i++;
	}
	free(v1);
	free(v2);
	free(v3);
	free(v4);
	return (res);
}

void	print_grid(int **grid, int size)
{
	int	i;
	int	j;
	int val;

	i = 0;
	while (i < size)
	{
		j = 0;
		while(j < size)
		{
			val = grid[i][j] + 48;
			write(1, &val, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	push_number(int **grid, int **input, int size, int pos)
{
	int	row;
	int	col;
	int	num;

	row = pos / size;
	col = pos % size;
	num = 1;
	if (pos == size * size)
		return (validation_rules(grid, input, size));
	while (num <= size)
	{
		if (validation_rep(grid, size, row, col, num))
		{
			grid[row][col] = num;
			if (push_number(grid, input, size, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	**init_grid(int size)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(sizeof(int *) * size);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < size)
	{
		grid[i] = (int *)malloc(sizeof(int) * size);
		if (!grid[i])
			return (NULL);
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

int	main(void)
{
	int	size = 5;
	int	**grid;
	int *input[5];

	grid = init_grid(size);

	int	input01[5] = {2,3,3,2,1};
	int	input02[5] = {1,2,4,3,4};
	int	input03[5] = {2,4,1,2,2};
	int	input04[5] = {2,1,2,3,4};

	input[0] = input01;
	input[1] = input02;
	input[2] = input03;
	input[3] = input04;

	if (push_number(grid, input, size, 0))
		print_grid(grid, size);
	else
		write(1, "Error\n", 6);
}