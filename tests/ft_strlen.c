/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:27:21 by qle-guen          #+#    #+#             */
/*   Updated: 2015/11/25 08:23:28 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strlen.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "random"

int		test1()
{
	return (ft_strlen("") == 0);
}

int		test2()
{
	return (ft_strlen(test_string)
			- strlen(test_string)
			== 0);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	add(&l, N2, F2);
	return (exec_tests(l, FILE));
}
