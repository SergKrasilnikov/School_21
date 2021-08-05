/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <********@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:48:53 by ********          #+#    #+#             */
/*   Updated: 2020/09/27 11:58:03 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int e;

	i = 0;
	e = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[e] != '\0' && i + e < size)
	{
		dest[i + e] = src[e];
		e++;
	}
	dest[i + e] = '\0';
	return (i + e);
}

int main()
{
	char a[] = "chelovek";
	char b[] = "molekula";
	unsigned int c = 13;
	printf("%i\n", ft_strlcat(a, b, c));
	return (0);
}
