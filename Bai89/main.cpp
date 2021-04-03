#include <stdio.h>
#include <conio.h>
int main()
{
    int n ,s = 0;
    printf("Nhap so nguyen duong n :");
    scanf("%d",&n);
    for (int i = 0 ; i <= n; i++)
       {
           if (i % 2 != 0)
            {
             s = s + i;
            // printf("\nS = %d",s);
           }



       }
        printf("\nS = %d",s);

    return 0;
}
