/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:18:07 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/19 20:45:18 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int ii;

	i = 0;
	ii = 0;
	while (str[i] != '\0')
	{
		while (to_find[ii] == str[i + ii])
		{
			if (to_find[ii + 1
		
