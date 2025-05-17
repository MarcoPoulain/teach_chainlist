/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_in_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kassassi <kassassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 12:54:08 by kassassi          #+#    #+#             */
/*   Updated: 2025/05/17 13:38:36 by kassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	ft_sum(int *a, int *b)
{
	*a = *a + *b;
	printf("Inside the function, I do *a = *a + *b\n");
	printf("So *a = %d\n", *a);
}

int	main(void)
{
	int	*a;
	int	*b;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 3;
	*b = 7;
	printf("\n");
	printf("Outside the function, I have two *ints, *a: %d, *b: %d\n", *a, *b);
	printf("-------------\n");
	ft_sum(a, b);
	printf("-------------\n");
	printf("I check the value of \"*a\" outside the function, *a: %d\n", *a);
	printf("*a = 10, this confirms the function's pointer scope\n\n");
	free(a);
	free(b);	
	return (0);
}
