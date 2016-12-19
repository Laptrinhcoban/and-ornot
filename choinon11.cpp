#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon11.inp","r",stdin);
	int a,b,x;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==0 && b!=0)
	{
		printf("Phuong Trinh Vo Nghiem");
	}
	else if(a==0 && b==0)
	{
		printf("Phuong Trinh Co Vo So Nghiem");
	}
	else
	{
		float x=(-b)/a;
		x=float((-b)/a);
		printf("Phuong trinh Co 1 Nghiem x=%5.2f",x);
	}
    return 0;
}

