#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}

int main(void)
{
    char a = '/';
    char uppercase = ft_toupper(a);
    printf ("%c",uppercase);
}