//Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000

#include <stdio.h>

int main()
{
    int n = 0,s = 0;

    for ( int i = 0 ;i <= n; i++ )
    {
        s = s + i ;

        if ( s > 10000)
              {
                  break ;

              }
              n++;
    }
    printf("So duong nho nhat la :%d",n);
    return 0;
}
