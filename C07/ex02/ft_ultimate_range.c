/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: venus <venus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:02:03 by venus             #+#    #+#             */
/*   Updated: 2021/08/10 18:36:41 by venus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int index;
    index = 0;

    if(min >= max)
    {
        *range = NULL;
        return(-1);
    }
    *range = (int*)malloc(sizeof(int)*(max - min));
    while(min < max)
        (*range)[index++] = min++;
    return(index);
}

int main()
{
    int from, to;
    int a;
    int *cont;
    cont = NULL;
    from = 4;
    to = 10;
    a = ft_ultimate_range(&cont, from, to);
    printf("%d\n", a);
    free(cont);
    return(0);
}