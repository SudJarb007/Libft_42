#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t idx;
    char *sub;
    
    idx = 0;
    if (s == NULL)
        return (NULL);
    if (start > ft_strlen(s))
        return ft_strdup("");
    if ((ft_strlen(s) - start) < len)
        len = ft_strlen(s) - start;
    sub = malloc(sizeof(char) * (len + 1));
    if (sub == NULL)
        return (NULL);
    while (idx < len)
    {
        sub[idx] = s[start + idx];
        idx++;
    }
    sub[idx] = '\0';
    return (sub);
}