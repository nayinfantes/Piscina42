/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:14:38 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/09 09:54:28 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include<stdio.h>
int main(void)
{ 
	int a;
	int b;
	a = 14;
	b = 5;
	
ft_ultimate_div_mod(&a, &b);
	printf("%d a %d b", a, b);
	}*/
