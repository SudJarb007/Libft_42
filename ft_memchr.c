#include "libft.h"

void *memchr(const void *str, int c, size_t n)
{
    unsigned char *p_str;
    size_t idx;

    idx = 0;
    p_str = (unsigned char *)str;
    while (idx < n)
    {
        if (p_str[idx] == (unsigned char)c)
            return (&p_str[idx]);
        idx++;
    }
    return (NULL);
}