#include "libft.h"
// »»-----► Number of lines: 25
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t idx;
    unsigned char *ptr_s;
    unsigned char *ptr_d;

    ptr_s = (unsigned char *)src;
    ptr_d = (unsigned char *)dest;
    if (ptr_d > ptr_s)
    {
        idx = n;
        while (idx > 0)
        {
            idx--;
            ptr_d[idx] = ptr_s[idx];
        }
    }
    else 
    {
        idx = 0;
        while (idx < n)
        {
            ptr_d[idx] = ptr_s[idx];
            idx++;
        }
    }
    return ((void *)ptr_d);
}
// »»-----► Number of lines: 21
int main()
{
    char str[] = "abcdefghij";
    
    // Scenario 1: การทับซ้อนกันแบบ src < dest
    // คัดลอก "abcde" ไปทับ "fghij"
    // (abcde)fghij -> abcde(abcde)
    printf("--- Scenario 1: src < dest ---\n");
    printf("ก่อนเรียก ft_memmove(): %s\n", str);
    
    // คัดลอก 5 ตัวอักษรจากตำแหน่งเริ่มต้น (str)
    // ไปยังตำแหน่งที่อยู่ถัดไป 3 ตัวอักษร (str + 3)
    ft_memmove(str + 3, str, 5);
    
    printf("หลังเรียก ft_memmove(): %s\n", str); // ผลลัพธ์ที่ถูกต้องควรเป็น "abcabcedef"
    
    printf("\n");
    
    // Reset string สำหรับการทดสอบที่ 2
    strcpy(str, "abcdefghij");
    
    // Scenario 2: การทับซ้อนกันแบบ dest < src
    // คัดลอก "fghij" ไปทับ "abcde"
    // (abcde)fghij -> fghij(fghij)
    printf("--- Scenario 2: dest < src ---\n");
    printf("ก่อนเรียก ft_memmove(): %s\n", str);
    
    // คัดลอก 5 ตัวอักษรจากตำแหน่งที่อยู่ถัดไป 5 ตัวอักษร (str + 5)
    // ไปยังตำแหน่งเริ่มต้น (str)
    ft_memmove(str, str + 5, 5);
    
    printf("หลังเรียก ft_memmove(): %s\n", str); // ผลลัพธ์ที่ถูกต้องควรเป็น "fghijfghij"
    
    return 0;
}