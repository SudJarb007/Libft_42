#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *str;
    int idx;
    int idx_2;

    idx = 0;
    idx_2 = 0;
    str = malloc(((ft_strlen(s1) + ft_strlen(s2) + 1)) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (s1[idx] != '\0')
    {
        str[idx] = s1[idx];
        idx++;
    }
    while (s2[idx_2] != '\0')
    {
        str[idx] = s2[idx_2];
        idx++;
        idx_2++;
    }
    str[idx] = '\0';
    return (str);
}