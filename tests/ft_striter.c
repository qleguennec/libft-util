/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:25:07 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 12:55:24 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_striter.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "random"

void	id_(char *s)
{
	(void) s;
}

int		test1()
{
	char test[1024];

	strcpy(test, "");
	ft_striter(test, &id_);
	return (strcmp("", test) == 0);
}

int		test2()
{
	char test[1024];

	strcpy(test, test_string);
	ft_striter(test_string, &plusone);
	ft_striter(test_string, &minusone);
	return (strcmp(test_string, test) == 0);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	add(&l, N2, F2);
	return (exec_tests(l, FILE));
}
