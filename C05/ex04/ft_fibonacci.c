/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:07:06 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/22 19:14:07 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int i;

	i = index;
	if (i < 0)
		return (-1);
	if (i == 0)
		return (0);
	if (i == 1 || i == 2)
		return (1);
	else
		return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}
