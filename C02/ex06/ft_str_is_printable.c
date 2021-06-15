/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 16:45:13 by kcustard          #+#    #+#             */
/*   Updated: 2020/08/02 16:52:46 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	unsigned int i;

	i = 0;
	while ((str[i] >= 32 && str[i] <= 126) && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int main()
{
	char a[] = "Hihi";
	printf("%i\n", ft_str_is_printable(a));
	return (0);
}