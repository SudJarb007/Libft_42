// #include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int idx;

    idx = 0;
    while (s[idx] != '\0')
    {
        if (s[idx] == (unsigned char)c)
            return ((char *)&s[idx]);
        idx++;
    }
    if (s[idx] == (unsigned char)c)
        return ((char *)&s[idx]);
    return (NULL);
}

int main(void)
{
    char dst[] = "asdfgh";
    char *test = ft_strchr(dst, 'f');

    printf("%s",test);
}
