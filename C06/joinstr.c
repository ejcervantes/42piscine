#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	get_all_len(char **str, int size)
{
	int	len;
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		len = 0;
		while (str[i][len] != 0)
			len++;
		count += len;
		i++;
	}
	return (count);
}

int	get_len(char *sepstr)
{
	int	i;

	i = 0;
	while (sepstr[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*newstr;

	i = 0;
	k = 0;
	if (size <= 0)
	{
		newstr = malloc(sizeof(char) * 1);
		if (newstr != NULL)
			newstr[0] = '\0';
		return (newstr);
	}
	newstr = malloc(sizeof(char) * (get_all_len(strs, size) + (get_len(sep) * (size - 1)) + 1));
	if (newstr == NULL)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			newstr[k++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j] != 0)
			newstr[k++] = sep[j++];
		i++;
	}
	newstr[k] = 0;
	return (newstr);
}

int	main(void)
{
	int	size = 2;
	char *str[] = {"Hello", "World"};
	char *sep = ", ";

	printf("%s", ft_strjoin(size, str, sep));
	printf("%d", (get_all_len(str, size) + get_len(sep) * (size - 1)) + 1);
}
