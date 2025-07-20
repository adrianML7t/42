#include <stdlib.h>
#include <stdio.h>

int get_rows(char *s, char c);
int get_cols(char *s, char c, int *i);
char **save_stringmat(char *s, char del, int rows);

char **ft_split(char const *s, char c)
{
    char **string_array;
    int i;
    int j;
    char *ss;

    i = 0;
    j = 0;
    ss = (char *)s;
    string_array = save_stringmat(ss, c, get_rows(ss, c));
    if (string_array == NULL)
        return (NULL);
    while (*s != '\0')
    {
        if(*s != c)
        {
            string_array[i][j] = *s;
            j++;
        }
        if(*s == c)
        {
            i++;
            j = 0;
        }
        s++;
    }
    return (string_array);
}

char **save_stringmat(char *s, char del, int rows)
{
    int i;
    char **ss;

    i = 0;
    int j = 0;
    ss = (char **)malloc(sizeof(char *)*rows);
    while (j < rows)
    {
        ss[j] = (char *)malloc(sizeof(char)*get_cols(s, del, &i));
        i++;
        j++;
    }
    return (ss);
}

/*char **save_stringmat(char *s, char del, int rows)
{
    int i;
    char **ss;

    i = 0;
    s = 0;
    ss = (char **)malloc(sizeof(char *)*rows);
    while (i < rows)
    {
        ss[i] = (char *)malloc(sizeof(char)*get_cols(&s, del));
        i++;
    }
    return (ss);
}*/

int get_rows(char *s, char c)
{
    int rows;

    rows = 0;
    while(*s != '\0')
    {
        if(*s == c)
        {
            rows++;
        }
        s++;
    }
    return (rows);
}

int get_cols(char *s, char c, int *i)
{
    int cols;

    cols = 0;
    while((s[*i] != c) && (s[*i] != '\0'))
    {
        cols++;
        (*i)++;
    }
    return (cols);
}

/*la funcion funciona correctamente
la memoria no se reserva bien*/