/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yxu <yxu@student.42tokyo.jp>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:44:44 by yxu               #+#    #+#             */
/*   Updated: 2023/11/05 18:17:50 by yxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <libc.h>
#include "libft.h"

__attribute__((destructor))
static void	destructor(void)
{
	system("leaks -q a.out");
}

int	main()
{
	ft_printf("%d\n", ft_atoi("1"));
}
