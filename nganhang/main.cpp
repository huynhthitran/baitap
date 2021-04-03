#include<stdio.h>

float laiKep(int n, float y, float x )
{
	if( n == 0) return y;
	return (1 + x/100)*laiKep(n-1,y,x);
}

int main()
{
    int n;
	float y,x;
	printf( "Nhap so nam n = "); scanf( "%d",&n);
	printf( "Nhap tien von y= ");	scanf( "%f",&y);
	printf( "Nhap lai suat x= "); scanf( "%f",&x);
	printf( "Tien = %.4f", laiKep(n,y,x));

    return 0;
}
