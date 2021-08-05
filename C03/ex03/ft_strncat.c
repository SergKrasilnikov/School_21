/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <********@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 19:14:02 by ********          #+#    #+#             */
/*   Updated: 2020/09/26 22:34:35 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int e;

	i = 0;
	e = 0;
	while (dest[i] != '\0')
		i++;
	while (src[e] != '\0' && e < nb)
	{
		dest[i + e] = src[e];
		e++;
	}
	dest[i + e] = '\0';
	return (dest);
}

int main()
{
	char a[] = "deli";
	char b[] = "mobil";
	unsigned int c = 5;
	printf("%s\n", ft_strncat(a, b, c));
	return (0);
}
