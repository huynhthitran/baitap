//Tính S(n) = x + x^2 + x^3 + … + x^n

#include<stdio.h>
#include<math.h>

int main()
{
    int x,n,s,t;
    printf("Nhap x :");
    scanf("\n%d",&x);
    printf("\nNhap n :");
    scanf("\n%d",&n);
    for(int i=1;i<=n;i++)
    {
        t = pow(x,i);
        s = s + t;
    }
    printf("\nS=%d",s);
    return 0;
}
