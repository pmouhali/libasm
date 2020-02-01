/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:22:05 by pmouhali          #+#    #+#             */
/*   Updated: 2020/02/01 17:50:55 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libasm.h"

void	test_ft_strcpy(void)
{
	printf("    FT_STRCPY\n");
	char dest[100];
	char *s;
	s = ft_strcpy(dest, "test");
	printf("returned : %s\n", s);
	printf("dest : %s\n", dest);
	s = ft_strcpy(dest, "abcdefghijklmnopqrstuvwxyz0123456789");
	printf("returned : %s\n", s);
	printf("dest : %s\n", dest);
	s = ft_strcpy(dest, "");
	printf("returned : %s\n", s);
	printf("dest : %s\n", dest);
}
