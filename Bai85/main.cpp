//Bài 85: Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm

#include <stdio.h>

int main()
{
    int thang;
    printf("Nhap thang cua nam :");
    scanf("\n%d",&thang);
    switch(thang)
    {
        case 1 :    thang = 1;
                    printf("\nThang mot \n");
                    break;
        case 2 :
                    thang = 2;
                    printf("\nThang hai \n");
                    break;
        case 3 :    thang = 3;
                    printf("\nThang ba \n");
                    break;
        case 4 :     thang = 4;
                    printf("\nThang tu \n");
                    break;
        case 5 :     thang = 5;
                    printf("\nThang nam \n");
                    break;
        case 6 :     thang = 6;
                    printf("\nThang sau \n");
                    break;
        case 7 :    thang = 7;
                    printf("\nThang bay \n");
                    break;
        case 8 :     thang = 8;
                    printf("\nThang tam \n");
                    break;
        case 9 :     thang = 9;
                    printf("\nThang chin \n");
                    break;
        case 10 :   thang = 10;
                    printf("\nThang muoi \n");
                    break;
        case 11 :    thang = 11;
                    printf("\nThang muoi mot \n");
                    break;
        case 12 :    thang = 12;
                    printf("\nThang muoi hai \n");
                    break;
        default :   printf("\nKhong phai la mot trong cac thang cua nam \n");
                    break;

    }
    if (thang == 1 || thang == 2 || thang == 3)
        printf("\nLa quy 1 cua nam\n",thang);
    else if (thang == 4 || thang == 5 || thang == 6)
        printf("\nLa quy 2 cua nam\n",thang);
         else if (thang == 7 || thang == 8 || thang == 9)
            printf("\nLa quy 3 cua nam\n",thang);
              else if (thang == 10 || thang == 11 || thang == 12)
                    printf("\nLa quy 4 cua nam\n",thang);
                    else
                        printf("\nCung khong phai la cac quy cua nam\n");
    return 0;
}
