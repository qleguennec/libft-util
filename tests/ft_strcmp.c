/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:35:41 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 15:19:38 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strcmp.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "random"
#define F3 &test3
#define N3 "one char"

int		test1()
{
	return(sign(
		ft_strcmp("", ""), strcmp("", "")
	));
}

int		test2()
{
	return(sign(
		ft_strcmp(test_string, "abba")
		, strcmp(test_string, "abba"))
		&& sign(
		ft_strcmp("abba", test_string)
		, strcmp("abba", test_string))
	);
}

int		test3()
{
	return(sign(
		ft_strcmp("a", "")
		, strcmp("a", ""))
		&& sign(
		ft_strcmp("", "a")
		, strcmp("", "a"))
	);
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
