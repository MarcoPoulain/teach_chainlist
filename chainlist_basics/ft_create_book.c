/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_book.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:41:15 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/15 12:12:54 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "book.h"

/*
This function dynamically allocates memory for a new book structure.
The struct itself does not have a name; 
it lives in the heap and is accessed through a pointer.
The 'title' and 'date' fields are initialized with the given arguments,
and 'next' is set to NULL.
The function returns a pointer to the newly allocated book.
*/

t_book *ft_create_book(char *title, int date)
{
    t_book *new_book = malloc(sizeof(t_book));
    if (!new_book)
        return NULL;
    new_book->title = title;
    new_book->date = date;
    new_book->next = NULL;
    return new_book;
}

/*
Creates a dynamic linked list of books, prints each one, and frees the memory.
'explorer' is used to traverse the list without modifying the original head pointer.
'tmp' temporarily stores the next node to avoid losing access before freeing the current one.

*/

/*int	main(void)
{
	t_book	*book5;
	t_book	*book6;
	t_book	*book7;
	t_book	*explorer;
	t_book	*tmp;

	book5 = ft_create_book("La Faute de l'Abbé Mouret", 1875);
	book6 = ft_create_book("Son Excellence Eugène Rougon", 1876);
	book7 = ft_create_book("L'Assommoir", 1877);

	book5->next = book6;
	book6->next = book7;
	book7->next = NULL;

	explorer = book5;
	printf("\n");
	while (explorer != NULL)
	{
		tmp = explorer->next;
		printf("Title: \"%s\"\n", explorer->title);
		printf("Published date: %d\n\n", explorer->date);
		free(explorer);
		explorer = tmp;
	}
	return (0);
}*/
