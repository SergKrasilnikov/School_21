/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 10:21:31 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/23 18:48:01 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	name;

	argc = 1;
	i = 0;
	while (argv[0][i])
	{
		name = argv[0][i];
		write(1, &name, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
