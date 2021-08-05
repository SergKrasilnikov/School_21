/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <********@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:07:06 by ********          #+#    #+#             */
/*   Updated: 2020/10/19 10:46:09 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int i;

	i = index;
	if (i < 0)
		return (-1);
	if (i == 0)
		return (0);
	if (i == 1 || i == 2)
		return (1);
	else
		return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

int main()
{
	int a = 8;
	printf("%i\n", ft_fibonacci(a));
	return(0);
}