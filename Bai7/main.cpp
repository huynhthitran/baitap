//Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …

#include<stdio.h>
int main ()
{
    int n ;
    float s=0,t=0;
    printf("Nhap n :");
    scanf("\n%d",&n);
    for (int i = 1; i<= n; i++)
    {

       {
            t = t + i;
            s = s + 1.0/t;
       }

    }
    printf("\nS=%f",s);
    return 0;
}
