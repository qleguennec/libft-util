/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:28:32 by moka              #+#    #+#             */
/*   Updated: 2015/11/26 10:37:42 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_tolower.c"
#define F1 &test1
#define N1 "random"

static char	tolower_(char c)
{
	return ((char) ft_tolower((int) c));
}

static char	toupper_(char c)
{
	return ((char) ft_toupper((int) c));
}

int		test1()
{
	return (ft_strequ(
		ft_strmap(test_string, &tolower_),
		ft_strmap(ft_strmap(test_string, &toupper_), &tolower_)
	));
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}
