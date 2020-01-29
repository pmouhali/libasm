#include <stdio.h>
#include <inttypes.h>

int	ft_strlen(char*);
int	ft_strcmp(char*, char*);

int	main(void)
{
	/*
	printf("  expected 0 got %d\n", ft_strlen(""));
	printf("  expected 1 got %d\n", ft_strlen("a"));
	printf("  expected 3 got %d\n", ft_strlen("abc"));
	printf("expected 100 got %d\n", ft_strlen("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"));
	*/
	printf(" expected 0 got %d\n", ft_strcmp("", ""));
	printf(" expected 0 got %d\n", ft_strcmp("aa", "aa"));
	printf("expected -1 got %d\n", ft_strcmp("ax", "xa"));
	printf(" expected 1 got %d\n", ft_strcmp("xa", "ax"));
	printf(" expected 1 got %d\n", ft_strcmp("aaa", ""));
	printf("expected -1 got %d\n", ft_strcmp("", "xaa"));
}
