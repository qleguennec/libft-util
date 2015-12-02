/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:08:45 by moka              #+#    #+#             */
/*   Updated: 2015/11/26 16:53:45 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strncat.c"
#define F1 &test1
#define N1 "random"

int		test1()
{
	char	test[1024];

	ft_bzero(test, 1024);
	return (
		ft_strequ(
			test_string,
			strncat(test, test_string, ft_strlen(test_string))
		)
	);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}