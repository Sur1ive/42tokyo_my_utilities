/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:44:44 by yxu               #+#    #+#             */
/*   Updated: 2023/10/27 20:39:15 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <libc.h>

__attribute__((destructor))
static void	destructor(void)
{
	system("leaks -q a.out");
}

typedef struct s_lines
{
	char	*line;
	char	*remain;
}	t_lines;

int	main()
{
	printf("%d\n", OPEN_MAX);
}
