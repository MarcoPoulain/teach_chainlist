/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tail.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:31:01 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/15 12:21:43 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.h"
#include <stdio.h>
#include <stdlib.h>

/*
We copy the pointer to a temporary variable to avoid modifying the original head of the list.
Using (*catalog)->next directly in the loop would work, 
but altering *catalog would lose the start of the list.
We use a double pointer so the function can modify the original list head if needed.
*/

void	ft_add_tail(t_book **catalog, t_book *new_book)
{
	t_book	*end_catalog;

	end_catalog = *catalog;
	if (end_catalog == NULL)
		end_catalog = new_book;
	else
	{
		while (end_catalog->next != NULL)
			end_catalog = end_catalog->next;
		end_catalog->next = new_book;
	}
}

/*
int	main(void)
{
	t_book	*book8;
	t_book	*book9;
	t_book	*book10;
	t_book	*book11;
	t_book	*explorer;
	t_book	*tmp;

	book8 = ft_create_book("Une Page d'amour", 1878);
	book9 = ft_create_book("Nana", 1880);
	book10 = ft_create_book("Pot-Bouille", 1882);
	book11 = ft_create_book("Au Bonheur des Dames", 1883);

	ft_add_tail(&book8, book9);
	ft_add_tail(&book8, book10);
	ft_add_tail(&book8, book11);
	
	printf("\n");
	explorer = book8;
	while (explorer != NULL)
	{
		tmp = explorer->next;
		printf("Title: \"%s\"\n", explorer->title);
        printf("Published date: %d\n\n", explorer->date);
		free(explorer);
		explorer = tmp;
	}
	return (0);
}
*/
