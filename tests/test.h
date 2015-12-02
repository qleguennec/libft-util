/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:30:27 by qle-guen          #+#    #+#             */
/*   Updated: 2015/12/02 09:21:20 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include <libft.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef int (*t_test_f) ();

#define MAX_STR_LEN 1000

typedef struct		s_test
{
	char			name[1024];
	t_test_f		test;
	
}					t_test;

typedef struct		s_testlist
{
	struct s_testlist	*next;
	t_test				*test;
}					t_testlist;

t_test		*get_test(char *name, t_test_f f);
int			exec_tests(t_testlist *l, char *file);
void		add(t_testlist **l, char *name, t_test_f f);
int			test();
char		*random_str();
char		random_char();
int 		random_int();
char		*test_string;
int			test_int;

char		id(char c);
void		plusone(char *s);
void		minusone(char *s);
char		plusone_fp(char c);
char		minusone_fp(char c);
int			sign(int a, int b);
int			lstsize(t_list *a);

#endif
