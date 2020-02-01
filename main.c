#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libasm.h"

void	test_ft_write(void);
void	test_ft_strlen(void);
void	test_ft_strcpy(void);
void	test_ft_strcmp(void);
void	test_ft_read(void);
void	test_ft_strdup(void);

int	main(void)
{
	test_ft_write();
	test_ft_strlen();
	test_ft_strcpy();
	test_ft_strcmp();
	test_ft_read();
	test_ft_strdup();
}
