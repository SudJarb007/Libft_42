#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
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
//         printf("%d\n",ft_isalpha(str[idx]));
//         idx++;
//     }
//     char    c = 'A';
//     test = ft_isalpha(c);
// }