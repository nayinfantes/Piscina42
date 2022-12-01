/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:28:57 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/15 15:57:04 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 90)
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
	int result = ft_str_is_uppercase("AAA");
	printf("%d", result);
	return (0);
}*/
