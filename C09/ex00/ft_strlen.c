#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}

int main()
{
	char *a;
	a = "Darling\n";
	ft_strlen (a);
	printf("%i\n", ft_strlen(a));
	return (0);
}