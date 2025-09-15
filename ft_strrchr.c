#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    size_t idx;

    idx = ft_strlen(s);
    while(idx >= 0)
    {
        if (s[idx] == (unsigned char)c)
        {
            return ((char *)&s[idx]);
        }
        idx--;
    }
    return (NULL);
}
int main(void)
{
    char dst[] = "*asd*fg*h";
    char *test = ft_strrchr(dst, '*');

    printf("%s",test);
}