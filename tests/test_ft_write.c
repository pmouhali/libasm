/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:46:53 by pmouhali          #+#    #+#             */
/*   Updated: 2020/02/01 17:51:15 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libasm.h"

void	original_write(char *rw, char *buf1, char *buf2)
{
	rw[0] = write(1, buf1, 0);
	rw[1] = write(1, buf1, 1);
	rw[2] = write(1, buf1, 5);
	rw[3] = write(1, buf1, 6);
	rw[4] = write(1, buf1, 10);
	rw[5] = write(1, buf2, 0);
	rw[6] = write(1, buf2, 1);
	rw[7] = write(1, buf2, 5);
	rw[8] = write(1, NULL, 5);
	rw[9] = write(244, buf1, 5);
	rw[10] = write(1, buf1, -3);
	write(1, "\n", 1);
}

void	my_write(char *rf, char *buf1, char *buf2)
{
	rf[0] = ft_write(1, buf1, 0);
	rf[1] = ft_write(1, buf1, 1);
	rf[2] = ft_write(1, buf1, 5);
	rf[3] = ft_write(1, buf1, 6);
	rf[4] = ft_write(1, buf1, 10);
	rf[5] = ft_write(1, buf2, 0);
	rf[6] = ft_write(1, buf2, 1);
	rf[7] = ft_write(1, buf2, 5);
	rf[8] = ft_write(1, NULL, 5);
	rf[9] = ft_write(244, buf1, 5);
	rf[10] = ft_write(1, buf1, -3);
	write(1, "\n", 1);
}

void	test_ft_write(void)
{
	int i;
	char rw[11];
	char rf[11];
	char buf1[10] = "NaSm\n";
	char buf2[10] = "";

	original_write(rw, buf1, buf2);
	my_write(rf, buf1, buf2);
	i = -1;
	while (++i < 11)
		printf("%d | ", rw[i]);
	printf("\n");
	i = -1;
	while (++i < 11)
		printf("%d | ", rf[i]);
	printf("\n");
}
