/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: venus <venus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:37:18 by venus             #+#    #+#             */
/*   Updated: 2021/08/12 11:29:28 by venus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int e;

	i = 0;
	e = 0;
	while (dest[i] != '\0')
		i++;
	while (src[e] != '\0')
	{
		dest[i + e] = src[e];
		e++;
	}
	dest[i + e] = '\0';
	return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int index, i;
    char *res;
    index = 0;
    i = 0;

    if (size == 0)
        return(NULL);

    while(index < size)
        i += ft_strlen(strs[index++]);
    i += (ft_strlen(sep) * size - 1);
  
    res = (char*)malloc(sizeof(char)*(i + 1));

    index = 0;
    while(index < size)
    {
        ft_strcat(res, strs[index]);
        if(index < size - 1)
            ft_strcat(res, sep);
        index++;
    }
    return(res);
}

int main(int argc, char *argv[])
{
    char c[4] = " - ";
    char *b;
    b = ft_strjoin(argc, argv, c);
    printf("%s\n", b);
    free(b);
    return(0);
}