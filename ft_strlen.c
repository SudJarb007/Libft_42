#include "libft.h"

size_t strlen(const char *s)
{
    size_t idx;

    idx = 0;
    while (s[idx] != '\0')
    {
        idx++;
    }
    return (idx);
}

// int main(void)
// {
//     char    s1 = "asdfgh";
//     int test;
//     test = ft_strlen(s1);
//     printf("%d",test);
// }