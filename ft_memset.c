#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t idx;
    unsigned char *tmp_s;

    idx = 0;
    tmp_s = (unsigned char *)b;
    while (idx < len)
    {
        tmp_s[idx] = (unsigned char)c;
        idx++;
    }
    return (b);
}
int main()
{
    char arr[10];
    int i;
    int size = sizeof(arr);
    ft_memset(arr, 'A', 10);
    for (i = 0; i < size; i++) {
        printf("%c", arr[i]);
    }
}