#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);
void view_cmat(char **s, int rows, int cols);
int get_rows(char *s, char c);
int get_cols(char *s, char c, int *i);

int main()
{
    char **ss;
    char *s = "hola,buenos,dias,Adrian";
    char del = ',';

    ss = ft_split(s, del);
    view_cmat(ss, get_rows(s, del), 20);

    return (0);
}