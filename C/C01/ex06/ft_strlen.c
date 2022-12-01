/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:25:58 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/11 09:41:00 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*#include<stdio.h>
 int main(void)
{
	char str[5] = "rosas";
	int i;
	i = ft_strlen(str);
	printf("%d", i);
	return (0);
}*/
