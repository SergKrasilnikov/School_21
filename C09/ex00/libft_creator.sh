#!/bin/sh

gcc -c ft_swap.c ft_strlen.c ft_strcmp.c ft_putstr.c ft_putchar.c
ar rc libft.a *.o