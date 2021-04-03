//Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c

#include<stdio.h>
 int main()
 {
     float a,b,c ,tam;
     printf("Nhap so a :");
     scanf("\n%f",&a);
     printf("Nhap so b :");
     scanf("\n%f",&b);
     printf("Nhap so c :");
     scanf("\n%f",&c);
     if ( a > b && a > c)
     {
        tam = a;
        printf("\nSo lon nhat la :%f",a);
     }
     else if (b > a && b > c)
     {
        tam = b;
        printf("\nSo lon nhat la :%f",b);
     }
     else
     {
        tam = c;
        printf("\nSo lon nhat la :%f",c);
     }
     return 0;
 }
