/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfoldl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 11:33:45 by moka              #+#    #+#             */
/*   Updated: 2015/11/30 07:21:11 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdlib.h>
#define FILE "ft_strclr.c"
#define F1 &test1
#define N1 "sum"

void	*plus(void* a, void *b)
{
	int *c;

	c = (int*) malloc(sizeof(int));
	*c = (*(int*) a) + (*(int*) b);
	free(a);
	free(b);
	return (c);
}

int		test1()
{
	int c;
	t_list *l;
	int *acc;

	acc = (int*) malloc(sizeof(int));
	*acc = 0;
	l = ft_lstindex(101);
	c = *((int*) ft_lstfoldl(
					&plus
					, acc
					, l));
	return(
		5050 ==
		c
	);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}
