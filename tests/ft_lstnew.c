/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:12:04 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/02 09:23:21 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_lstnew.c"
#define F1 &test1
#define N1 "empty"

int		test1()
{
	t_list *a;
	int *c;
	int *d;

	c = (int*) malloc(sizeof(int));
	d = (int*) malloc(sizeof(int));
	*c = 5;
	*d = 2;
	a = ft_lstnew(c, sizeof(int));
	a->next = ft_lstnew(d, sizeof(int));
	return (lstsize(a) == 2);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}
