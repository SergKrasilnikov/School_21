/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 12:36:56 by kcustard          #+#    #+#             */
/*   Updated: 2020/08/30 14:26:24 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)

{
	int i;

	i = 0;
	if (!(str))
		return(0);

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] == 32 && (str[i + 1] >= 97 && str[i + 1] <= 122))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

int main()
{
	char a[] = "";
	printf("%s\n", ft_strcapitalize(a));
	return (0);
}