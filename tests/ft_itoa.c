/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:55:41 by moka              #+#    #+#             */
/*   Updated: 2015/11/26 18:26:16 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_itoa.c"
#define F1 &test1
#define N1 "randint"
#define F2 &test2
#define N2 "zero"
#define F3 &test3
#define N3 "randint"

int		test1()
{
	return (test_int == ft_atoi(ft_itoa(test_int)));
}

int 	test2()
{
	return (!ft_atoi(ft_itoa(0)));
}

int 	test3()
{
	int x = (-1) * test_int;
	return (x == ft_atoi(ft_itoa(x)));
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	add(&l, N2, F2);
	add(&l, N3, F3);
	return (exec_tests(l, FILE));
}
