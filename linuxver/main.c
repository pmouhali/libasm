#include <stdio.h>
#include <inttypes.h>

int	ft_strlen(char*);
int	ft_strcmp(char*, char*);
char *ft_strcpy(char*, char*);

int	main(void)
{
/*
	printf("    FT_STRLEN\n");
	printf("expected   0 got %3d\n", ft_strlen(""));
	printf("expected   1 got %3d\n", ft_strlen("a"));
	printf("expected   3 got %3d\n", ft_strlen("abc"));
	printf("expected 100 got %3d\n", ft_strlen("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"));

	printf("    FT_STRCMP\n");
	printf("expected   0 got %3d\n", ft_strcmp("", ""));
	printf("expected   0 got %3d\n", ft_strcmp("aa", "aa"));
	printf("expected  -1 got %3d\n", ft_strcmp("ax", "xa"));
	printf("expected   1 got %3d\n", ft_strcmp("xa", "ax"));
	printf("expected   1 got %3d\n", ft_strcmp("aaa", ""));
	printf("expected  -1 got %3d\n", ft_strcmp("", "xaa"));
*/
	printf("    FT_STRCPY\n");
	char dest[100];
	char *s;
	s = ft_strcpy(dest, "linux");
	printf("returned : %s\n", s);
	printf("dest : %s\n", dest);
	s = ft_strcpy(dest, "abcdefghijklmnopqrstuvwxyz0123456789");
	printf("returned : %s\n", s);
	printf("dest : %s\n", dest);
	s = ft_strcpy(dest, "");
	printf("returned : %s\n", s);
	printf("dest : %s\n", dest);
}
