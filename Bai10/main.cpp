//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!

#include<stdio.h>
#include<math.h>
int giaithua(int n){
    int gt=1;
    for(int i=1; i<=n; i++){
        gt*=i;
    }
    return gt;

}

int main()
{
    int n,x;
    float sum=1;
     printf("Nhap so nguyen duong x:");
    scanf("\n%d",&x);
    printf("\nNhap  n :");
    scanf("\n%d",&n);
    for (int i = 1; i<= n; i++)
    {
        sum = sum + pow(x, 2*i)/giaithua(2*i);
    }
    printf("\nS=%f",sum);
    return 0;
}
