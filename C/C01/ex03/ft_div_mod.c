/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:11:47 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/09 09:52:23 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main(void)
{	int div;
	int mod;
	int a;
	int b;
	a = 12;
	b= 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d div %d mod", div, mod); 
}
#include<stdio.h>
*/	
