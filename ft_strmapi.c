#include "libft.h"

void ft_strmapi(char *s, char (*f)(unsigned int, char))
{
    char *new_str;
    unsigned int idx;
    int len;

    idx = 0;
    len = ft_strlen(s);
    new_str = malloc(sizeof(char) + (len + 1));
    if (new_str == NULL)
        return (NULL);
    while (idx < len)
    {
        new_str[idx] = (f)(idx, s[idx]);
        idx++;
    }
    new_str[idx] = '\0';
    return (new_str);
}