//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 +

#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,x;
    float s=0,t=0;
     printf("Nhap so nguyen duong x:");
    scanf("\n%d",&x);
    printf("\nNhap  n :");
    scanf("\n%d",&n);
    for (int i = 1; i <= n; i++)
    {
        p = pow(x,i);
        t = t + i;
        s = s + p/t;
    }
    printf("\nS=%f",s);
    return 0;
}
