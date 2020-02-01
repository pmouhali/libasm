/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:11:36 by pmouhali          #+#    #+#             */
/*   Updated: 2020/02/01 17:56:23 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char*);
int	ft_strcmp(char*, char*);
char	*ft_strcpy(char*, char*);
ssize_t	ft_write(int, const void*, size_t);
ssize_t ft_read(int, void *, size_t);
char *ft_strdup(const char*);

#endif
