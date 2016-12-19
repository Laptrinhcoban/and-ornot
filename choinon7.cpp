#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon7.inp","r",stdin);
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	float p=(a+b+c)/2,S;
	if (a+b>c && b+c>a && a+c>b)
	{
		S=float(sqrt(p*(p-a)*(p-b)*(p-c)));
		printf("S= %5.2f",S);
	}
	else
	{
		printf("Khong Phai La Tam Giac");
	}
    return 0;
}

