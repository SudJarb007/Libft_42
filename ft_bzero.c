#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t idx;
    unsigned char *ptr;

    idx = 0;
    ptr = (unsigned char *)s;
    while (idx < n)
    {
        ptr[idx] = 0;
        idx++;
    }
}
int main()
{
    char data_bzero[20] = "Hello, C programming!";
    int i;
    int size = sizeof(data_bzero);
    ft_bzero(data_bzero, 5);
    printf("หลังเรียก ft_bzero(): ");
    for (i = 0; i < size; i++) {
        // ใช้ %d เพื่อดูค่าไบต์แต่ละตัว
        // ซึ่งควรจะเป็น 0 สำหรับ 5 ตัวแรก
        printf("%d ", (unsigned char)data_bzero[i]);
    }
}