#include "libft.h"

int  ft_strlcat(char *dst, char *src, int n)
{
    int len_dst;
    int len_src;
    int idx;

    len_dst = 0;
    len_src = 0;
    idx = 0;
    // while (dst[len_dst] != '\0')
    // {
    //    len_dst++;
    // }
    len_dst = ft_strlen(dst);
    // while (src[len_src] != '\0')
    // {
    //    len_src++;
    // }
    len_src = ft_strlen(src);
    
    if (len_dst > n)
        return (len_src + n);
    while (src[idx] != '\0' && (len_dst + idx) < n - 1)
    {
        dst[len_dst + idx] = src[idx];
        idx++;
    }
    dst[len_dst + idx] = '\0';
    return (len_dst + len_src);
}

// int main(void)
// {
//     char dst[] = "asdfgh";
//     char src[] = "AAAHHHSSS";
//     int n = 10;
    
//     printf("%d\n",ft_strlcat(dst, src, n));
//     printf("%s",dst);
// }