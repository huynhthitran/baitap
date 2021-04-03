//Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!

#include<stdio.h>
#include<math.h>

int main()
{
    int n,p,x;
    float s=0,t=1;
    printf("Nhap so nguyen duong x:");
    scanf("\n%d", &x);
    printf("\nNhap  n :");
    scanf("\n%d", &n);
    
    for (int i = 1; i<= n; i++)
    {
        p = pow(x, i);
        t = t * i;
        s = s + p / t;
    }
    printf("\nS=%f",s);
    return 0;
}
