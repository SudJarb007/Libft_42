#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, int size)
{
    int idx;

    idx = 0;
    while (src[idx] != '\0' && idx < size)
    {
        dest[idx] = src[idx];
        idx++;
    }
    while (idx < size)
    {
        dest[idx] = '\0';
        idx++;
    }
    return (dest);
}

int main(void)
{
    char dest[50] = "zxc";
    char src[] = "asdfgh";
    int size = 4;

    ft_strncpy(dest,src,size);
    printf("%s",dest);
}