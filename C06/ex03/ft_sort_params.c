/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatwoma <kbatwoma@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:44:39 by kcustard          #+#    #+#             */
/*   Updated: 2021/01/31 11:29:16 by kbatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		a;
	int		index;
	int		flag;
	char	argm;


	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		index = 0;
		while (++index < argc)
		{
			if (ft_strcmp(char *s1, char *s2) != 0)
			{
				flag = 1;
			}
			argm = argv[index][a];
			write(1, &argm, 1);
		}
		return (0);
	}
}



