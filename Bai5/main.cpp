
 //Tính S(n) = x^2 + x^4 + … + x^2n

 #include<stdio.h>
 #include<math.h>

 int main()
 {
      int x,n,s=0,t;
    printf("Nhap x :");
    scanf("\n%d",&x);
    printf("\nNhap n :");
    scanf("\n%d",&n);
    for(int i = 1; i<= n; i++)
    {

        {
             t = pow(x,2*i);
             s = s + t;
        }

    }
    printf("\nS=%d",s);
    return 0;
 }
