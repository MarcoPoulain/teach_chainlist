/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:46:15 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/15 11:15:15 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "book.h"

/*
This program demonstrates a simple linked list using books from Zola's Rougon-Macquart series.
Each book is manually linked to the next using pointers.
The list is traversed step by step, and an example with a pointer
*/

int main(void)
{
    t_book	book1;
    t_book	book2;
    t_book	book3;
	t_book	book4;

    book1.title = "La Fortune des Rougon";
	book1.date = 1871;
    book1.next = &book2;

    book2.title = "La Curée";
	book2.date = 1872;
    book2.next = &book3;

    book3.title = "Le Ventre de Paris";
	book3.date = 1873;
    book3.next = &book4;

	book4.title = "La conquête de Plassans";
	book4.date = 1874;
	book4.next = NULL;
	
	printf("\n이것은 나의 멋진 루공 마카르 컬렉션입니다.\n\n");

    printf("First book: %s\n", book1.title);
	printf("Publication date: %d\n\n", book1.date);

    printf("Second book: %s\n", book1.next->title);
	printf("Publication date: %d\n\n", book1.next->date);

    printf("Third book: %s\n", book1.next->next->title);
	printf("Publication date: %d\n\n", book1.next->next->date);

	printf("Fourth book: %s\n", book1.next->next->next->title);
	printf("Publication date: %d\n\n", book1.next->next->next->date);

// You can also access the struct using pointers; here's an example:

	t_book	*ptr1;

	ptr1 = &book1;
	printf("Display the title with a pointer:\n");
	printf("First book: %s\n\n", ptr1->title);

    return 0;
}

