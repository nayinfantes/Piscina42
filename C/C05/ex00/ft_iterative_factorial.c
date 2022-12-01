/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:40:11 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/21 12:57:14 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (fact);
}
/*int main(void)
{
	printf("%d", fact);
	ft_iterative_factorial(4);
	return (0);
}*/
