/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <********@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:18:07 by ********          #+#    #+#             */
/*   Updated: 2020/09/27 10:44:45 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)	
{
	int i;
	int e;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		e = 0;
		while (str[i] != '\0' && str[i] != to_find[e])
			i++;
		if (str[i] == '\0')
			str[0] = '\0';
		else
		{	
			j = i;
			while (str[i] == to_find[e] && to_find[e] != '\0')
			{
				i++;
				e++;
			}
			if (to_find[e] == '\0')
			{
				return (str + j);
			}
		}
	}
	return (str);
}

int main()
{
	char a[] = "black lives matter";
	char b[] = "lives";
	printf("%s\n", ft_strstr(a, b));
	return (0);
}