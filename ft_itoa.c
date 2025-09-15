// #include "libft.h"
#include <stdio.h>
#include <stdlib.h> // สำหรับฟังก์ชัน free()
#include <limits.h> // สำหรับค่าคงที่ INT_MAX และ INT_MIN

char *ft_itoa(int n)
{
    char *str_num;
    int count;
    int sign;
    long num;
    long tmp_num;
    int i;

    count = 0;
    sign = 0;
    num = n;
    if (num == -2147483648)
    {
        num = 2147483648;
        sign++;
    }
    else if (num == 0)
        count = 1;
    else if (num < 0)
    {
        num = num * (-1);
        sign++;
    }
    tmp_num = num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    str_num = malloc(sizeof(char) * ((count + sign) + 1));
    if (str_num == NULL)
        return (NULL);
    if (sign > 0)
    {
        str_num[0] = '-';
    }
    else if (str_num == 0)
    {
        str_num[0] = '0';
    }
    i = sign + count;
    str_num[i] = '\0';
    while (tmp_num != 0)
    {
        str_num[i - 1] = ((tmp_num % 10) + '0');
        tmp_num = tmp_num / 10;
        i--;
    }
    return (str_num);
}
void test_case(int number, const char *description) {
    char *result = ft_itoa(number);

    printf("--- ทดสอบ %s (ค่า: %d) ---\n", description, number);
    if (result == NULL) {
        // กรณีที่ ft_itoa ส่งคืน NULL แสดงว่ามีปัญหาในการจัดสรรหน่วยความจำ
        printf("ผลลัพธ์: FAILED! ft_itoa คืนค่า NULL (หน่วยความจำไม่พอ?)\n");
    } else {
        // กรณีที่ ft_itoa ทำงานถูกต้อง
        printf("ผลลัพธ์: \"%s\"\n", result);
        printf("สถานะ: %s\n", (atoi(result) == number) ? "PASSED ✅" : "FAILED ❌");
        free(result); // สำคัญมาก: ต้องคืนหน่วยความจำที่ malloc() มา
    }
    printf("\n");
}

int main() {
    printf("===== เริ่มการทดสอบ ft_itoa =====\n\n");

    // ทดสอบกรณีปกติ (ตัวเลขบวก)
    test_case(123, "ตัวเลขบวกปกติ");
    
    // ทดสอบกรณีตัวเลขลบ
    test_case(-456, "ตัวเลขลบ");
    
    // ทดสอบกรณี 0
    test_case(0, "ค่าศูนย์");

    // ทดสอบกรณีตัวเลขที่ขอบเขตสูงสุดและต่ำสุดของ int
    test_case(INT_MAX, "ค่าสูงสุดของ int (INT_MAX)"); // ค่านี้คือ 2147483647
    test_case(INT_MIN, "ค่าต่ำสุดของ int (INT_MIN)"); // ค่านี้คือ -2147483648

    // ทดสอบตัวเลขที่มีหลายหลักและตัวเลขหนึ่งหลัก
    test_case(987654321, "ตัวเลขบวกขนาดใหญ่");
    test_case(-1, "ค่า -1");
    test_case(5, "ตัวเลขหนึ่งหลัก");

    printf("===== การทดสอบ ft_itoa เสร็จสิ้น =====\n");
    
    return 0;
}