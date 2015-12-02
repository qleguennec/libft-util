/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:01:26 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/02 09:06:12 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strsub.c"
#define F1 &test1
#define N1 "simple"

int		test1()
{
	ft_strequ("42", ft_strsub("   42 born to code", 3, 2));
	return (1);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}
