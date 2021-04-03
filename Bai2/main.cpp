//Tính T(x, n) = x^n
#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,T;
    printf("Nhap so nguyen duong x:");
    scanf("\n%d",&x);
    printf("Nhap so mu nguyen duong n:");
    scanf("\n%d",&n);
    while(x<0 || n<0)
    {
       printf("Nhap lai so nguyen duong x:");
    scanf("\n%d",&x);
    printf("Nhap lai so mu nguyen duong n:");
    scanf("\n%d",&n);
    }
    T = pow (x,n);
    printf("\nT = %d",T);
    return 0;
}
