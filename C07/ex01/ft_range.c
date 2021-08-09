/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: venus <venus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:50:21 by venus             #+#    #+#             */
/*   Updated: 2021/08/09 23:05:20 by venus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *dest;
    int index;
    int len;
    len = max-min;
    index = 0;

    if(min >= max)
        return(NULL);
    dest = (int*)malloc(sizeof(int)*(len));
    while(index < len)
        dest[index++] = min++;
    return(dest);
}

int main()
{
    int from, to;
    int *a;
    int indexm;
    indexm = 0;
    from = 5;
    to = 10;
    a = ft_range(from, to);
    while(from++ < to)
        printf("%d\n", a[indexm++]);
    free(a);
    return(0);
}