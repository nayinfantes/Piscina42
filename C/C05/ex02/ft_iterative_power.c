/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:05:18 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/21 21:02:02 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (i < power)
	{
		result = nb * result;
		i++;
	}	
	return (result);
}
/*int main(void)
{
	printf("%i", ft_iterative_power(5, 3 ));
	return (0);
}*/
