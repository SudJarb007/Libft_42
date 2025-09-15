#include "libft.h"
// »»-----► Number of lines: 14
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_size;
    size_t idx;

    src_size = ft_strlen(src);
    idx = 0;
    if (dstsize == 0)
        return (src_size);
    
    while ( idx < (dstsize - 1) && src[idx] != '\0')
    {
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = '\0';
    return (src_size);
}


// if (dstsize > src_size)
    // {
    //     while (idx < dstsize)
    //     {
    //         ptr_d[idx] = ptr_s[idx];
    //         idx++;
    //     }
    // }
    // else // dstsize < src_size
    // {
    //     while (idx < (dstsize - 1))
    //     {
    //         ptr_d[idx] = ptr_s[idx];
    //         idx++;
    //     }
    //     ptr_d[idx] = '\0';
    // }