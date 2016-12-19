#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{	
	freopen("choinon12.inp","r",stdin);
	float a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==0 && b==0 && c==0)
	{
		printf("Phuong Trinh Da Cho Co Vo So Nghiem(Sai)");
	}
	else if(a==0 && b==0 && c!=0)
	{
		printf("Phuong Trinh Da Cho Vo Nghiem");
	}
	else if(a==0)
	{
		float x1=(-c)/b,x2=(-c)/b;
		x1=x2=float((-c)/b);
		printf("Phuong Trinh Da Cho Co 2 Nghiem Kep:\n x1=x2=%5.2f",x1,x2);
	}
	else
	{
		float x1,x2;
		x1=float((-b+sqrt(b*b+4*a*c))/(2*a));
		x2=float((-b-sqrt(b*b+4*a*c))/(2*a));
		printf("Phuong Trinh Da Cho Co 2 Nghiem PB:\n x1=%5.2f\n x2=%5.2f",x1,x2);
	}
    return 0;
}

