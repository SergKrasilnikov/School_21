/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: venus <venus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:16:52 by venus             #+#    #+#             */
/*   Updated: 2021/08/06 22:18:53 by venus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int out;
    out = 0;

    while(str[out] != '\0')
        out++;
    return(out);
}

char    *ft_strdup(char *src)
{
    int param;
    char *dest;
    param = 0;
    dest = (char*)malloc(sizeof(char)*(ft_strlen(src)+1));

    while(src[param] != '\0')
    {
        dest[param] = src[param];
        param++;
    }
    dest[param] = '\0';
    return(dest);
}

int main()
{
    char res[] = "World";
    char *new = ft_strdup(res);
    printf("%s\n", new);
    free(new);
    return(0);
}