/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:24:45 by pmouhali          #+#    #+#             */
/*   Updated: 2020/02/01 17:50:46 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libasm.h"

void	test_ft_strcmp(void)
{
	printf("    FT_STRCMP\n");
	printf("expected   0 got %3d\n", ft_strcmp("", ""));
	printf("expected   0 got %3d\n", ft_strcmp("aa", "aa"));
	printf("expected  -1 got %3d\n", ft_strcmp("ax", "xa"));
	printf("expected   1 got %3d\n", ft_strcmp("xa", "ax"));
	printf("expected   1 got %3d\n", ft_strcmp("aaa", ""));
	printf("expected  -1 got %3d\n", ft_strcmp("", "xaa"));
	printf("expected   1 got %3d\n", ft_strcmp("xaab", "xaa"));
	printf("expected  -1 got %3d\n", ft_strcmp("xaa", "xaab"));
}
