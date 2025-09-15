#include <stdio.h>

char    *ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return ((char *)str);
    while (str[i] != '\0' && i < len)
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i + j] != '\0' && (i + j) < len)
        {   
            if (to_find[j + 1] == '\0')
                return ((char *)&str[i]);
            j++;
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char str[] = "Hello, world! This is a test string.";
    char to_find[] = "test";
    printf("%s", ft_strnstr(str , to_find, 15));
}