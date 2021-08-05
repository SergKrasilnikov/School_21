/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <********@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:31:04 by ********          #+#    #+#             */
/*   Updated: 2020/09/26 21:41:00 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	char a[] = "sutiner";
	char b[] = "sutinet";
	unsigned int c = 7;
	printf ("%i\n", ft_strncmp(a, b, c));
	return (0);
}