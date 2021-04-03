//Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0

#include <stdio.h>

int main()
{
   int a,b ;
   float x;

   printf("Nhap a :");
   scanf("%d",&a);
   printf("\nNhap b :");
   scanf("%d",&b);
   if (a != 0)
   {
       x = float(-b)/ (a) ;
       printf("\nx = %.2f\n",x);
   }
   else if (a == 0 && b != 0)

        printf("\nPhuong trinh vo nghiem\n ");

        else
            printf("\nPhuong trinh co vo so nghiem \n");
   return 0;
}
