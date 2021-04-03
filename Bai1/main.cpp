//Tính T(n) = 1 x 2 x 3…x N

#include <stdio.h>

int main()
{
    int n,s=1;
    printf("Nhap so nguyen duong n :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        s=s*i;
    printf("\nS = %d",s);
    return 0;
}
