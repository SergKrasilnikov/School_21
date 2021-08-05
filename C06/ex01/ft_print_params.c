/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ******** <********@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:44:39 by ********          #+#    #+#             */
/*   Updated: 2021/01/30 11:26:58 by ********         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		index;
	char	argm;

	index = 0;
	while (++index < argc)
	{
		i = -1;
		while (argv[index][++i])
		{
			argm = argv[index][i];
			write(1, &argm, 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
