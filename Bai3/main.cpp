// Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

#include<stdio.h>

int main()
{
    int n,s=0,p=1;
    printf("Nhap so nguyen duong n :");
    scanf("\n%d",&n);
    for (int i=1;i<=n;i++)
    {
       p = p * i ;
       s = s + p;
    }

    printf("\nS = %d",s);
}
