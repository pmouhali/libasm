#include <stdio.h>
#include "../libasm.h"

void	test_ft_strdup(void)
{
	char	*res;
	
	printf("   FT_STRDUP\n");
	res = NULL;
	res = ft_strdup("strdup");
	printf("expected 'strdup' got %s\n", res);
	free(res);
	res = NULL;
	res = ft_strdup("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	printf("expected a lot of x got %s\n", res);
	free(res);
	res = NULL;
	res = ft_strdup("");
	printf("expected       '' got %s\n", res);
	free(res);
}
