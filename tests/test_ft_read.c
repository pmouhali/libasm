/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:26:45 by pmouhali          #+#    #+#             */
/*   Updated: 2020/02/01 16:46:17 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libasm.h"

void	original_read(int fd, char *r)
{
	char buf1[11];

	r[0] = read(fd, buf1, 0);
	buf1[r[0]] = 0;
	printf("%s\n", buf1);
	r[1] = read(fd, buf1, 1);
	buf1[r[1]] = 0;
	printf("%s\n", buf1);
	r[2] = read(fd, buf1, 9);
	buf1[r[2]] = 0;
	printf("%s\n", buf1);
	r[3] = read(fd, buf1, 10);
	buf1[r[3]] = 0;
	printf("%s\n", buf1);
	r[4] = read(fd, buf1, 11);
	buf1[r[4]] = 0;
	printf("%s\n", buf1);
	r[5] = read(fd, buf1, -3);
	printf("%s\n", buf1);
	r[6] = read(fd, NULL, 10);
	printf("%s\n", buf1);
	r[7] = read(fd, NULL, -44);
	printf("%s\n", buf1);
	close (fd);
	r[8] = read(fd, buf1, 10);
	printf("%s\n", buf1);
}

void	my_read(int fd, char *r)
{
	char buf2[11];

	r[0] = ft_read(fd, buf2, 0);
	buf2[r[0]] = 0;
	printf("%s\n", buf2);
	r[1] = ft_read(fd, buf2, 1);
	buf2[r[1]] = 0;
	printf("%s\n", buf2);
	r[2] = ft_read(fd, buf2, 9);
	buf2[r[2]] = 0;
	printf("%s\n", buf2);
	r[3] = ft_read(fd, buf2, 10);
	buf2[r[3]] = 0;
	printf("%s\n", buf2);
	r[4] = ft_read(fd, buf2, 11);
	buf2[r[4]] = 0;
	printf("%s\n", buf2);
	r[5] = ft_read(fd, buf2, -3);
	printf("%s\n", buf2);
	r[6] = ft_read(fd, NULL, 10);
	printf("%s\n", buf2);
	r[7] = ft_read(fd, NULL, -44);
	close (fd);
	printf("%s\n", buf2);
	r[8] = ft_read(fd, buf2, 10);
	printf("%s\n", buf2);
}

void	test_ft_read(void)
{
	char rr[9];
	char rf[9];
	int fd;
	int i;
	
	printf("    FT_READ");
	fd = open("./test.txt", O_RDONLY);
	original_read(fd, rr);
	fd = open("./test.txt", O_RDONLY);
	my_read(fd, rf);
	i = -1;
	while (++i < 9)
		printf("%d | ", rr[i]);
	printf("\n");
	i = -1;
	while (++i < 9)
		printf("%d | ", rf[i]);
}
