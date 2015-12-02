/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:34:00 by qle-guen          #+#    #+#             */
/*   Updated: 2015/11/26 16:32:20 by moka             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int			main()
{
	return (test());
}

void		add(t_testlist **l, char *name, t_test_f f)
{
	if (!*l)
	{
		*l = (t_testlist*)malloc(sizeof(t_testlist));
		(*l)->test = get_test(name, f);
		(*l)->next = NULL;
	}
	else
		add(&(*l)->next, name, f);
}

t_test		*get_test(char *name, t_test_f f)
{
	t_test *result;

	result = (t_test*)malloc(sizeof(t_test));
	strcpy(result->name, name);
	result->test = f;
	return (result);
}

int			exec_tests(t_testlist *l, char *file)
{
	int ret_code;

	if (!l)
		return (0);
	else
	{
		if (strcmp(l->test->name, "random") == 0)
		{
			test_string = random_str();
			printf("str: \e[0;34m%s\e[39m ~ ", test_string);
		}
		else if (ft_strequ(l->test->name, "randint"))
		{
			test_int = random_int();
			printf("int: \e[0;34m%d\e[39m ~ ", test_int);
		}
		ret_code = l->test->test();
		if (ret_code)
		{
			printf("OK:\t(file) %s\t\e[0;36m(test) %s\e[39m\n"
					,file, l->test->name);
			return (exec_tests(l->next, file));
		}
		else
		{
			printf("FAIL:\t(file) %s\t\e[0;31m(test) %s \t(error) %d\n\e[39m"
					,file, l->test->name, ret_code);
			return (ret_code);
		}
	}
	return (0);
}
