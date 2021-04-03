#include<stdio.h>

void mang ( int n,int a[])
{
	for ( int i = 0 ; i < n ; i++)
	{
		printf ("\nPhan tu thu a[%d] = ",i);
		scanf("\n%d",&a[i]);	
	}
}
int main ()
{
	int n , pivot = 0 , a[50] ;
	printf("Nhap n :");
	scanf("%d", &n);
	mang ( n, a);
	for (int i = 1 ; i < n ; i++)
	{
		
		if (a[i] < a[pivot] )
			pivot = i;		
	}
	printf("\nVi tri co gia tri nho nhat la : %d", pivot);
	return 0;
}
