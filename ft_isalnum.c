#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

int ft_isalnum2(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

// int main(void)
// {
//     char str[] = "a45sdfgh";
//     int idx;
//     int test;

//     idx = 0;
//     while (str[idx] != '\0')
//     {
//         printf("%d\n",ft_isalnum(str[idx]));
//         idx++;
//     }
//     char    c = 'A';
//     test = ft_isalnum(c);
//     printf("%d",test);
// }