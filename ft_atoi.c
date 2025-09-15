#include "libft.h"
// »»-----► Number of lines: 21
int ft_atoi(const char *str)
{
    int idx;
    int ans;
    int sign;

    idx = 0;
    sign = 1;
    ans = 0;
    while (str[idx] >= 9 && str[idx] <= 13 || (str[idx] == 32))
        idx++;
    if (str[idx] == '+')
        idx++;
    else if (str[idx] == '-')
    {
        sign = sign * (-1);
        idx++;
    }
    while (str[idx] >= 48 && str[idx] <= 57)
    { 
        ans = (ans * 10) + str[idx] - '0';
        idx++;
    }
    return (ans * sign);
}
// »»-----► Number of lines: 18
int main()
{
    char s1[] = "12345";
    char s2[] = "  -678";
    char s3[] = "  +9000xyz";
    char s4[] = "abc123";

    printf("Input: \"%s\"\n", s1);
    printf("Output: %d\n\n", ft_atoi(s1));

    printf("Input: \"%s\"\n", s2);
    printf("Output: %d\n\n", ft_atoi(s2));

    printf("Input: \"%s\"\n", s3);
    printf("Output: %d\n\n", ft_atoi(s3));

    printf("Input: \"%s\"\n", s4);
    printf("Output: %d\n\n", ft_atoi(s4));

    return 0;
}