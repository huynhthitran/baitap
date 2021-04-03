//Bài 79: Hãy đếm số lượng chữ số của số nguyên dương n

#include<stdio.h>

int main()
{
    double n, dem = 1;
    printf("Nhap chu so cua so nguyen duong n :");
    scanf("\n%lf",&n);
    
    while(n >= 10)
    {
        n = n / 10 ;
        dem++;
    }
    
    printf("\nSo luong chu so cua so nguyen n la : %.lf", dem);
    
	return 0;
}
