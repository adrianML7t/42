#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
char sum_one (unsigned int i, char c);

int main()
{
    char *s = "aaaa";
    printf("%s", ft_strmapi(s, *sum_one));
}

char sum_one (unsigned int i, char c)
{
    i = 0;
    i++;
    return (c + 1);
}