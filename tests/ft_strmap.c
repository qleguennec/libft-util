/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:05:46 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 13:07:31 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strmap.c"
#define F1 &test1
#define N1 "empty_id"
#define F2 &test2
#define N2 "random"
#define F3 &test3
#define N3 "random"

int		test1()
{
	return (strcmp(
		"",
		ft_strmap("", &id)
	) == 0);
}

int		test2()
{
	return(strcmp(
		test_string,
		ft_strmap(test_string, &id)
	) == 0);
}

int		test3()
{
	char *cmp; 
	cmp = ft_strmap(ft_strmap(test_string, &plusone_fp), &minusone_fp);
	return (strcmp(
		test_string,
		cmp
	) == 0);
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
