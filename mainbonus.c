/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiquiau <ggiquiau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:24:12 by ggiquiau          #+#    #+#             */
/*   Updated: 2020/11/24 14:39:00 by ggiquiau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *list_to_str(t_list	*l)
{
	char *str = ft_calloc(ft_lstsize(l) + 1,1);
	while (l)
	{
		strcat(str, l->content);
		l = l->next;
	}
	return (str);
}

void	f1(void *content)
{
	(*((char*)content))++;
}

void	*f2(void *content)
{
	char *ret = strdup((char*)content);
	(*ret)++;
	return (ret);
}

void	del(void *content)
{
	free(content);
}

int main (int argc, char **argv)
{
	t_list *l = ft_lstnew(strdup("1"));

	if (l->next == NULL && !strcmp(l->content,"1"))
		printf("OK lstnew\n");
	else
		printf("BAD lstnew\n");

	t_list *e2 = ft_lstnew(strdup("0"));
	ft_lstadd_front(&l,e2);
	if (e2 == l && !strcmp(l->next->content, "1"))
		printf("OK lstadd_front\n");
	else
		printf("BAD lstadd_front\n");
	if (ft_lstsize(l) == 2)
		printf("OK lstsize\n");
	else
		printf("BAD lstsize\n");

	t_list *e3 = ft_lstnew(strdup("2"));
	ft_lstadd_back(&l, e3);
	if (l->next->next == e3)
		printf("OK lstadd_back\n");
	else
		printf("BAD lstadd_back\n");
	t_list *last = ft_lstlast(l);
	if (last == e3)
		printf("OK lstlast\n");
	else
		printf("BAD lstlast\n");

	ft_lstiter(l, &f1);
	char *str = list_to_str(l);
	if (!strcmp(str, "123"))
		printf("OK lstiter 123 %s\n", str);
	else
		printf("BAD lstiter 123 %s\n", str);

	t_list *l2 = ft_lstmap(l, &f2, &del);	
	char *str2 = list_to_str(l2);
	if (!strcmp(str2, "234") && !strcmp(str, "123"))
		printf("OK lstmap 234 %s\n", str2);
	else
		printf("BAD lstmap 234 %s\n", str2);
	ft_lstclear(&l, &del);
	ft_lstclear(&l2, &del);
	return (0);
}
