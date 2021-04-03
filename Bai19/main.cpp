//Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3

#include <stdio.h>
#include<math.h>

int main()
{
    int n,x ,s = 0;
    printf("Nhap so mu x : ");
    scanf("%d",&x);
    printf("Nhap so nguyen duong n : ");
    scanf("%d",&n);
   for (int i = 1 ; i <= n ; i++)
   {
       s = s + pow(i ,x);
   }
   printf("\nS = %d",s);
   return 0;
}
