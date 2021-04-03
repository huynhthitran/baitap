//Bài 83: Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không
#include<stdio.h>

int main()
{
    float a,b ;
    printf("Nhap a :");
    scanf("%f",&a);
    printf("Nhap b :");
    scanf("%f",&b);
    if ( a > 0 && b > 0 || a < 0 && b < 0)
        printf("\n2 so deu cung dau \n");
    else
        printf("\n2 so khong cung dau \n");
    return 0;
}
