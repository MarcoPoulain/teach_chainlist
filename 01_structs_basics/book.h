/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:42:26 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/14 19:37:34 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_H
# define BOOK_H

typedef struct s_book
{
	char			*title;
	int				date;
	struct s_book	*next;
}	t_book;

t_book	*create_book(char *title, int date);

#endif
