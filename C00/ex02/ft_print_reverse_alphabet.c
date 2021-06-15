/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:20:45 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/16 12:34:22 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c <= 'z' && c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
