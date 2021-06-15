/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 23:28:55 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/17 23:33:36 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;

	c = a / b;
	*div = c;
	*mod = a % b;
}

int main()
{
	int d;
	int e;
	int div1;
	int mod1;

	d = 21;
	e = 10;
	ft_div_mod(d, e, &div1, &mod1);
	printf("%i\n%i\n", div1, mod1);
	return (0);
}
