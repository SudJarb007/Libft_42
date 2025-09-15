#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *help_ptr;
    size_t idx;
    size_t total;
    
    idx = 0;
    total = nmemb * size;
    void *ptr = malloc(total);
    if (ptr == NULL)
        return (NULL);
    help_ptr = (unsigned char *)ptr;
    while (idx < total)
    {
        help_ptr[idx] = 0;
        idx++;
    }
    return (ptr);
}