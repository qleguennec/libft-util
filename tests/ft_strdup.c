/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:04:16 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 16:58:49 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strdup.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "random"

int		test1()
{
	return (
		ft_strequ("", 
			ft_strdup("")
		)
	);
}

int		test2()
{
	return (
		ft_strequ(test_string,
			ft_strdup(test_string)
		)
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
