/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:38:09 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 15:44:59 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strchr.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "random"

int		test1()
{
	return (
		ft_strchr("", '\0')
		== strchr("", '\0')
	);
}

int		test2()
{
	char c;

	c = random_char();
	return (
		ft_strchr(test_string, c)
		== strchr(test_string, c)
	);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	add(&l, N2, F2);
	return (exec_tests(l, FILE));
}
