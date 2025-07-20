#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    char nullchar = '\0';
    
    write (fd, &s, ft_strlen(s));
    write (fd, &nullchar, 1);
}