/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:41:44 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/10 19:10:38 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		aux = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = aux;
		i++;
		size--;
	}
}
/*#include<stdio.h>
 * int main(void)
{
	int numbers[6] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(numbers, 6);
	printf("%d %d %d %d %d %d", numbers[0], numbers[1],
   	numbers[2], numbers[3], numbers[4], numbers[5]);
	return (0);
}*/
