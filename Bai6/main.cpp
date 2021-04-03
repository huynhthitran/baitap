// Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

 #include<stdio.h>
 #include<math.h>

 int main()
 {
      int x,n,s=0,t;
    printf("Nhap x :");
    scanf("\n%d",&x);
    printf("\nNhap n :");
    scanf("\n%d",&n);
    for(int i = 0; i<= n; i++)
    {

        {
             t = pow(x,2*i+1);
             s = s + t;
        }

    }
    printf("\nS=%d",s);
    return 0;
 }
