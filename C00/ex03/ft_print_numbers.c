/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:30:46 by ********          #+#    #+#             */
/*   Updated: 2020/07/16 12:13:44 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9' && c >= '0')
	{
		write(1, &c, 1);
		c++;
	}
}

int main()
{
	ft_print_numbers();
	return(0);
}
