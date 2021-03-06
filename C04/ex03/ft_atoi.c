/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <********@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:09:56 by ********          #+#    #+#             */
/*   Updated: 2020/10/18 00:02:12 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int				i;
	long int		nb;
	int				min;

	i = 0;
	min = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == 45 || \
	str[i] == 43)
		if (str[i++] == 45)
			min = min * -1;
	if (str[i] >= '0' && str[i] <= '9')
		nb = str[i++] - '0';
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	nb = nb * min;
	if (nb <= -2147483648 || nb >= 2147483647)
		return (0);
	return (nb);
}

int main()
{
	char a[] = " ---+----2147483648b567";
	printf("%i\n", ft_atoi(a));
}
