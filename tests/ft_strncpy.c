/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:11:51 by moka              #+#    #+#             */
/*   Updated: 2015/11/25 11:40:32 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define FILE "ft_strncpy.c"
#define F1 &test1
#define N1 "test1"

int		test1()
{
	char test[1024];

	ft_strncpy(test, "", 10);
	return (ft_strlen(test) == 0 && test[1] == '\0');
}

int		test()
{
	t_testlist *l;

	l = NULL;
	add(&l, N1, F1);
	return (exec_tests(l, FILE));
}
