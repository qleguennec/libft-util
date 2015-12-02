/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:49:18 by moka              #+#    #+#             */
/*   Updated: 2015/11/26 14:06:21 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strsplit.c"
#define F1 &test1
#define N1 "test1"
#define F2 &test2
#define N2 "test2"
#define F3 &test3
#define N3 "empty"

int		test1()
{
	char **t;

	t = ft_strsplit("*salut*les***etudiants*", '*');
	return(
		ft_strequ("salut", t[0])
		&& ft_strequ("les", t[1])
		&& ft_strequ("etudiants", t[2])
		&& ft_strequ("", t[3])
	);
}

int		test2()
{
	char **t;

	t = ft_strsplit("42 born to code", ' ');
	return(
		ft_strequ("42", t[0])
		&& ft_strequ("born", t[1])
		&& ft_strequ("to", t[2])
		&& ft_strequ("code", t[3])
		&& ft_strequ("", t[4])
	);
}

int		test3()
{
	char **t;

	t = ft_strsplit("", '4');
	return(
		ft_strequ("", t[0])
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