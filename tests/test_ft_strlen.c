/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:16:14 by pmouhali          #+#    #+#             */
/*   Updated: 2020/02/01 16:24:09 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libasm.h"

void	test_ft_strlen(void)
{
	printf("    FT_STRLEN\n");
	printf("expected   0 got %3d\n", ft_strlen(""));
	printf("expected   1 got %3d\n", ft_strlen("a"));
	printf("expected   3 got %3d\n", ft_strlen("abc"));
	printf("expected 100 got %3d\n", ft_strlen("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"));
}
