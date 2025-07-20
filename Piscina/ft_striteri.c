void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(s) + 1;
    while (i < len)
    {
        f(i, s[i]);
        i++;
    }   
}

/*funciones autorizadas nada,
pero usar ft_strlen?*/