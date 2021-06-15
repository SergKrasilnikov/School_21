/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 10:21:31 by kcustard          #+#    #+#             */
/*   Updated: 2021/01/30 11:29:38 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	name;

	(void)argc;
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
