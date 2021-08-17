#include <stdio.h>
#include "ft_abs.h"

int ft_atoic(char *str)
{
    int         i;
    int         min;
    long int    nb;
    min = 1;
    nb = 0;
    i = 0;

    if(str[i] == 45)
    {
        min = -1;
        i++;
    }
    while(str[i] >= 48 && str[i] <= 57)
		nb = nb * 10 + (str[i++] - '0');
	nb = nb * min;
    return(nb);
}

int main(int argc, char **argv)
{
    (void)argc;
    long int x;
    x = ft_atoic(argv[1]);
    printf("%li\n", ABS(x));
    return(0);
}