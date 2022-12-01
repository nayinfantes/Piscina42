/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:17:21 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/15 15:55:18 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 97 && str[i] <= 122)
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
	int result = ft_str_is_lowercase("HHHHH");
	printf("%d", result);
	return(0);
}*/
