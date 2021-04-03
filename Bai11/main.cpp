//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!


#include<stdio.h>
#include<math.h>

int luythua(int n)
{
    int gt = 1;
    for (int i = 1; i <= n; i++ )
    {
        gt = gt * i;
    }
    return gt;
}

int main()
{
    int n, x, mu;
    float s = 1;
    printf("Nhap so nguyen duong x :");
    scanf("\n%d", &x);
    printf("Nhap n :");
    scanf("\n%d", &n);
    for(int i = 0; i <= n; i++)
    {
        mu = pow(x, 2 * i + 1);
         s = s + float(mu) / luythua(2 * i + 1);
    }
    printf("\nS = %f", s);

    return 0;
}
