/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:09:56 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/21 16:28:37 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int				i;
	unsigned int	nb;
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
	return (nb);
}

int main()
{
	char a[] = " ---+--+1234ab567";
	printf("%i\n", ft_atoi(a));
}
