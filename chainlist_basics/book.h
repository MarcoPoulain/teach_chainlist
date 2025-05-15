/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:42:26 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/15 12:11:34 by kassassi         ###   ########.fr       */
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

t_book	*ft_create_book(char *title, int date);
void	ft_add_tail(t_book **explorer, t_book *last_book);

#endif
