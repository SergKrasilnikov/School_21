/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 15:05:00 by kcustard          #+#    #+#             */
/*   Updated: 2020/08/30 16:01:07 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_hexadecimals(char symb)
{
	char p;
	int z;
	p = (symb / 16) + '0';
	if (p == '0')
		write (1, "\\", 1);
	write (1, &p, 1);
	z = symb % 16;
	if (z > 0 && z <= 9)
		write (1, &z, 4);
	else
		symb = z + 87;
	write (1, &symb, 1);
}

void ft_putstr_non_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
			ft_hexadecimals(str[i++]);
		write (1, &str[i++], 1);
	}
}

int main()
{
	char a[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(a);
	return(0);
}