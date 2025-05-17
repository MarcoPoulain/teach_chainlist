/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 12:26:40 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/17 13:38:45 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fscope.h"
#include <stdio.h>

static void	ft_sum(int a, int b)
{
	a = a + b;
	printf("Inside the function, I do a = a + b\n");
	printf("So a = %d\n", a);
}

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 7;
	printf("\n");
	printf("Outside the function, I have two ints, a: %d, b: %d\n", a, b);
	printf("-------------\n");
	ft_sum(a, b);
	printf("-------------\n");
	printf("I check the value of \"a\" outside the function, a: %d\n", a);
	printf("a = 3, this confirms the function's variable scope\n\n");
	return (0);
}
