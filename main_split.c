#include "libft.h"

int main()
{
    char **test_path;
    char *path = "Hello:world:exit";
    int	i = 0;

	test_path = ft_split(path, ':');

	while (test_path[i])
	{
		ft_putendl_fd(test_path[i], 1);
		i++;
	}
	free(test_path);
    return (0);
}
