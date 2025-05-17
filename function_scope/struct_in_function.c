/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_in_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:31:36 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/17 16:16:52 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../chainlist_basics/book.h"
#include <stdio.h>
#include <stdlib.h>

static void	global_change_book_fail(t_book *old_book, t_book *new_book)
{
	old_book = new_book;
	printf("Function global_change_book_fail:\n");
	printf("I'm applying the change inside the function\n");
	printf("The title of my old book has become: \"%s\"\n\n", old_book->title);

}

static void	global_change_book_success(t_book **old_book, t_book **new_book)
{
	*old_book = *new_book;
	printf("Function global_change_book_success:\n");
	printf("I'm applying the change inside the function\n");
 	printf("The title of my old book has become: \"%s\"\n\n", (*old_book)->title);

}

int	main(void)
{
	t_book	*old_book;
	t_book	*new_book;
	
	old_book = ft_create_book("Mon expérience 42", 2025);
	new_book = ft_create_book("Ma réussite 42", 2026);
	
	printf("\n");
	printf("I would like to change this title: \"%s\"\n", old_book->title);
	printf("I want to change it to: \"%s\"\n\n", new_book->title);
	printf("------------------\n\n");
	global_change_book_fail(old_book, new_book);
	printf("------------------\n\n");

	printf("But outside the scope of the function ");
	printf("the title remained: \"%s\"\n\n", old_book->title);
	
	printf("------------------\n\n");
 	global_change_book_success(&old_book, &new_book);
 	printf("------------------\n\n");

	printf("Outside the scope of the function ");
 	printf("the title become: \"%s\"\n\n", old_book->title);

	free(old_book);
	return(0);
}
