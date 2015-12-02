/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:25:29 by moka              #+#    #+#             */
/*   Updated: 2015/11/26 09:48:11 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strstr.c"
#define F1 &test1
#define N1 "simple"
#define F2 &test2
#define N2 "random"
#define F3 &test3
#define N3 "simple"

int		test1()
{
	return (ft_strstr("42 born to code", "born to codes") == NULL);
}

int		test2()
{
	return (ft_strequ(
		test_string,
		ft_strstr(test_string, "")
	));
}

int		test3()
{
	return (ft_strequ(
		"code",
		ft_strstr("42 born to code", "c")
	));
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N2, F2);
	add(&l, N1, F1);
	add(&l, N3, F3);
	return (exec_tests(l, FILE));
}
