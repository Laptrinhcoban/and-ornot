#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon5.inp","r",stdin);
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("So lon nhat la:a= %d",a);
	}
	else if(b>a && b>c)
	{
		printf("So lon nhat la:b= %d",b);
	}
	else
	{
		printf("So lon nhat la:c =%d",c);
	}
    return 0;
}

