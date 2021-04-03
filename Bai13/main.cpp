//Bài 78: Liệt kê tất cả các ước số của số nguyên dương n
// Bai 78: Liet ke uoc so

#include<stdio.h>

int main()
{
    int n;
    printf("Nhap n :");
    scanf("\n%d",&n);
    for (int i = 1 ; i <= n; i++)
    {
        if (n % i == 0)
            printf("\nCac uoc so nguyen la %d\n",i);

    }
    return 0;
}
