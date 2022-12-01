/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ninfante <ninfante@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:39:26 by ninfante          #+#    #+#             */
/*   Updated: 2022/11/22 17:08:57 by ninfante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include<stdio.h>
#include<string.h>
int main(void)
{
	char src[] = "rosas";
	char src1[] = "rosas";
	char dest[] = "margaritas";
	char dest1[] = "margaritas";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));			
}
