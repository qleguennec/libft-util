/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:00:46 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 11:40:50 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_striteri.c"
#define F1 &test1
#define N1 "test1"

void	test1_helper(unsigned int i, char *s)
{
	char test[10];

	sprintf(test, "%u", i);
	*s = test[0];
}

int		test1()
{
	char test[1024];

	ft_strcpy(test, "blabla");
	ft_striteri(test, &test1_helper);
	return (strcmp(test, "012345") == 0);
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}
