#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int idx;

    idx = 0;
    if (n == 0)
        return (0);
    while ((idx < n) && (s1[idx] != '\0'|| s2[idx] != '\0'))
    {
        if ((unsigned char)s1[idx] != (unsigned char)s2[idx])
            return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
        idx++;
    }
    return (0);
}

int main(void)
{
    char s1[] = "asdfgh";
    char s2[] = "Asdfgh";
    int n = 5;

    int test = ft_strncmp(s1, s2, n);
    printf("%d", test);

}