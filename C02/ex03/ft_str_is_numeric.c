/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:16:26 by kcustard          #+#    #+#             */
/*   Updated: 2020/08/02 13:23:03 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int i;

	i = 0;
	while ((str[i] > 47 && str[i] < 58) && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int main()
{
	char a[] = "12";
	printf("%i\n", ft_str_is_numeric(a));
	return (0);
}