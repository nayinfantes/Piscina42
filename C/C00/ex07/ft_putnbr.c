/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:17:54 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/17 17:36:21 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	int_to_putchar(int c)
{
	c = c + '0';
	write(1, &c, 1);
	return;
}

void	ft_putnbr(int nb)
{
	int	c;

	if (nb == 2147483647)
	{

		write(1, "2147483647", 10);
		return;
	}
	if (nb < 0)
	{
		if (nb == -2147483647)
		{
			write(1, "-2147483647", 11);
			return;
		}
		nb = nb * (-1);
		write(1, "-", 1);
	}
	if (nb <= 9)
		c = nb;
	else
	{
		c = nb % 10;
		ft_putnbr(nb / 10);
	}
	int_to_putchar(c);
}
int main(void)
{
	ft_putnbr(42);
	return(0);
}
