/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:54:38 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/15 14:35:02 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
	int result = ft_str_is_alpha("Hola");
	printf("%d", result);
	return(0);
}*/
