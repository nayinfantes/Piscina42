/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:25:33 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/10 11:28:57 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

char	int_to_char(int n)
{
	char	c;

	c = n + '0';
	return (c);
}

void	print_line(int c1)
{	
	int	inputa;
	int	inputb;

	inputa = c1 / 10;
	inputb = c1 % 10;
	inputa = int_to_char(inputa);
	inputb = int_to_char(inputb);
	write (1, &inputa, 1);
	write (1, &inputb, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_line(a);
			write (1, " ", 1);
			print_line(b);
			if (a < 98)
			{
				write (1, ", ", 2);
			}
			b ++;
		}
		a ++;
	}
}
int main(void)
{
	ft_print_comb2();
	return(0);
}
