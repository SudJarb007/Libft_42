#include <stdio.h>

char    *ft_strcpy(char *dest, const char *src)
{
    int idx;

    idx = 0;
    while (src[idx] != '\0')
    {
        dest[idx] = src[idx];
        idx++;
    }
    dest[idx] = '\0';
    return (dest);
}

int main(void)
{
    char dest[30] = "";
    char src[] = "asdfgh";

    ft_strcpy(dest, src);
    printf("%s",dest);
}