/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:03:02 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/15 15:51:30 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*#include<stdio.h>
#include<string.h>
int main(void)
{
	int result= ft_str_is_numeric("123fsdgdg");
	printf("%d", result);
	return (0);
}*/
