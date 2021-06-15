/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:30:12 by kcustard          #+#    #+#             */
/*   Updated: 2020/08/02 13:33:27 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	unsigned int i;

	i = 0;
	while ((str[i] > 64 && str[i] < 91) && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int main()
{
	char a[] = "HIHI";
	printf("%i\n", ft_str_is_uppercase(a));
	return (0);
}