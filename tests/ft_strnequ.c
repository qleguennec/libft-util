/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strneq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:46:21 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 16:08:34 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strnequ.c"
#define F1 &test1
#define N1 "test"

int		test1()
{
	return (!ft_strnequ("abba", "abba"));
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}