#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	char a[] = "lol";
	char b[] = "lox";
	printf("%i\n", ft_strcmp(a, b));
	return (0);
}