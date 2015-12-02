/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:54:03 by moka              #+#    #+#             */
/*   Updated: 2015/11/26 13:01:20 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strjoin.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "simple"

int		test1()
{
	return(ft_strequ(
			"42 born to code",
			ft_strjoin("", "42 born to code")
		)
	);
}

int		test2()
{
	return(ft_strequ(
			"42 born to code",
			ft_strjoin("42 ", "born to code")
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
