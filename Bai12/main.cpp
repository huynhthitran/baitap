//Bài 77: Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … +

#include<stdio.h>

int main()
{
    int n, s = 0;
    printf("Nhap n :");
    scanf("\n%d", &n);
    for (int i = 0; i <= n; i++)
    {
        s = s + i;
    }
    printf("\nS = %d", s);
    return 0;
}
