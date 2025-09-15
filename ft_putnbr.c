#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *str;
    int idx;

    str = ft_itoa(n);
    idx = 0;
    if(str == NULL)
        return;
    while (str[idx] != '\0')
    {
        write(fd , &str[idx], 1);
        idx++;
    }
    free(str);
}