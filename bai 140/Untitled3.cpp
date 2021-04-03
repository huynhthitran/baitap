#include<stdio.h>
#include<limits.h>
void nhap_mang (int n, int a[])
{
	 for (int i = 0; i < n; i++)
     {
    	printf ("\nPhan tu thu a[%d] = ",i);
		scanf("\n%d",&a[i]);
     }
    
}
int main ()
{
	int pivot = INT_MAX, a[50];
	int n;
	printf("Nhap n :");
	scanf("%d",&n);
	nhap_mang ( n,  a);
    for (int i = 0; i < n; i++)
    {
    	if (a[i] > 0 &&  a[i] < pivot)
    		pivot = a[i]; 
	}
	printf("\nGia tri duong nho nhat la : %d", pivot);
	return 0;
}
