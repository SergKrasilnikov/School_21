/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:24:31 by kcustard          #+#    #+#             */
/*   Updated: 2020/08/02 13:29:13 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int i;

	i = 0;
	while ((str[i] > 96 && str[i] < 123) && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int main()
{
	char a[] = "hihi";
	printf("%i\n", ft_str_is_lowercase(a));
	return (0);
}