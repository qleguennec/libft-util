/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:06:13 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 12:16:33 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_memcpy.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "random"

int		test2()
{
	char test[1024];
	char test1[1024];
	
	ft_memcpy(test, test_string, ft_strlen(test_string) + 1);
	memcpy(test1, test_string, ft_strlen(test_string) + 1);
	return (strcmp(test, test1) == 0);
}

int		test1()
{
	char test[1024];

	ft_memcpy(test, "", 1);
	return (strcmp(test, "") == 0);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	add(&l, N2, F2);	
	return (exec_tests(l, FILE));
}
