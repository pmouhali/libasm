#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	string_access_exemple(char *s);

int	main(int ac, char **av)
{
	string_access_exemple(av[1]);
}
