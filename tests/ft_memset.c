/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 08:45:09 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 09:55:59 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_memset.c"
#define F1 &test1
#define N1 "fill with 'a'"

int		test1()
{
	char s[20];
	char cmp[20];

	ft_memset(s, 'a', sizeof(cmp));
	memset(cmp, 'a', sizeof(s));
	s[19] = '\0';
	cmp[19] = '\0';
	return (strcmp(s, cmp) == 0);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}
