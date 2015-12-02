/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moka <moka@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:07:56 by moka              #+#    #+#             */
/*   Updated: 2015/12/02 09:13:26 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char		id(char c)
{
	return (c);
}

char		*random_str()
{
	int length;
	int i;
	char *str;

	srand(time(NULL));
	length = rand() % MAX_STR_LEN;
	i = 0;
	str = NULL;
	str = (char*)malloc(sizeof(char*) * (length + 1));
	while (i < length)
	{
		str[i] = (rand() % 95) + 32;
		i++;
	}
	str[i] = '\0';
	return str;
}

char		random_char()
{
	srand(time(NULL));
	return (rand() % 127);
}

int			random_int()
{
	srand(time(NULL));
	return (rand());
}

void	plusone(char *s)
{
	*s = *s + 1;
}

void	minusone(char *s)
{
	*s = *s - 1;
}

char	plusone_fp(char c)
{
	return (c + 1);
}

char	minusone_fp(char c)
{
	return (c - 1);
}

int		sign(int a, int b)
{
	return (
		(a > 0 && b > 0)
		|| (b < 0 && a < 0)
		|| (a == 0 && b == 0)
	);
}

int			lstsize(t_list *a)
{
	if (!a)
		return (0);
	else
		return (1 + ft_lstsize(a->next));
}
