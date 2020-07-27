/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 13:20:07 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/27 13:38:38 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;


	if (!(argv[1]))
	{
		write(1, "File name missing.\n", 19)
		return(0);
	}
	fd = open (argv[1], O_RDONLY)
	if (argv[2])
	{
		write(1, "Too many arguments.\n", 20)
		return(0);
	}
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18)
		return(0);
	}

