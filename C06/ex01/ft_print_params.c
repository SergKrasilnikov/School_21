/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:44:39 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/23 18:47:45 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		ii;
	char	argm;

	i = 0;
	ii = 1;
	while (ii < argc)
	{
		while (argv[ii][i])
		{
			argm = argv[ii][i];
			write(1, &argm, 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		ii++;
	}
	return (0);
}
