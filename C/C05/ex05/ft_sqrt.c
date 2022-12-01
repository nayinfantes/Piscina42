/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:04:03 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/22 17:43:28 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	
	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
	{
		if (i > 46340)
			return (0);
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
int	main(void)
{
	printf("%i", ft_sqrt(9));
	return (0);
}
