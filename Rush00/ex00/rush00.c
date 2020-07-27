/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:47:16 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/19 18:06:05 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, int x2, int y, int y2)
{
	if ((y2 == 1 && x2 == 1) || (y2 == y && x2 == 1) || (y2 == 1 && x2 == x) || (y2 == y && x2 == x)
		ft_putchar('º');
	else if (y2 == y && x2 == 1 || y2 == y && x2 == x)
		ft_putchar('|');
	else if (y2 == 1 && x2 == x || y2 == y && x2 == x)
		ft_putchar('-');

	if (y2 == 1 && x2 == 1)
		ft_putchar('º');
	else if (y2 == y && x2 == 1)
		ft_putchar('º');
	else if (y2 == 1 && x2 == x)
		ft_putchar('º');
	else if (y2 == y && x2 == x)
		ft_putchar('º');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int y2;
	int x2;

	y2 = 1;
	x2 = 1;
	while (y2 <= y)
	{
		while (x2 <= x)
		{
			if ((y2 == 1) || (y2 == y) || (x2 == 1) || (x2 == x))
			{
				print(x, x2, y, y2);
			}
			else
				ft_putchar(' ');
			x2++;
			if (x == x2 - 1)
			{
				ft_putchar('\n');
			}
		}
		x2 = 1;
		y2++;
	}
}
