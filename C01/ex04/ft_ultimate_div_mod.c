
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 17:58:55 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/30 18:00:36 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	int d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

int main()
{
	int i1;
	int i2;

	i1 = 21;
	i2 = 10;
	ft_ultimate_div_mod(&i1, &i2);
	printf("%i\n%i\n", i1, i2);
	return (0);
}
