#include "libft.h"

char *ft_strdup(const char *str){
    char    *new_str;
    int len;
    int idx;

    idx = 0;
    len = ft_strlen(str);
    new_str = malloc((len + 1) * sizeof(char));
    if (new_str == NULL)
        return (NULL);
    while (str[idx] != '\0')
    {
        new_str[idx] = str[idx];
        idx++;
    }
    new_str[idx] = '\0';
    return (new_str);
}