/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:44:39 by kcustard          #+#    #+#             */
/*   Updated: 2021/01/30 12:50:40 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		index;
	char	argm;

	index = argc;
	while (--index > 0)
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