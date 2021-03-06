/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:15:06 by moka              #+#    #+#             */
/*   Updated: 2015/11/26 14:18:08 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strtrim.c"
#define F1 &test1
#define N1 "empty"
#define F2 &test2
#define N2 "test2"

int		test1()
{
	return (ft_strequ("", ft_strtrim("")));
}

int		test2()
{
	return (
		ft_strequ("42borntocode", ft_strtrim(" 42 born   to code "))
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
