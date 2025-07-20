#include <stdlib.h>

int ft_strlen(char *s);
/*revisar si está bien reservada la memoria*/
char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    char *fstring;
    int i;
    int len;
    char *ss;

    i = 0;
    ss = (char *)s;
    len = ft_strlen(ss) + 1;
    fstring = malloc(len);
    if (fstring == NULL)
        return (NULL);
    while (i < len)
    {
        fstring[i] = f(i, s[i]);
        i++;
    }
    fstring[i] = '\0';
    return (fstring);
}

int ft_strlen(char *s)
{
    int len;

    len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return (len);
}
