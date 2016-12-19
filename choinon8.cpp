#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon8.inp","r",stdin);
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b && a>c && b>c)
	{
		printf("%d %d %d",c,b,a);
	}
	else if(a>b && a>c && c>b)
	{
		printf("%d %d %d",b,c,a);
	}
	else if(b>a && b>c && c>a)
	{
		printf("%d %d %d",a,c,b);
	}
	else if(b>a && b>c && a>c)
	{
		printf("%d %d %d",c,a,b);
	}
	else if(c>a && c>b && b>a)
	{
		printf("%d %d %d",a,b,c);
	}
	else if(c>a && c>b && a>b)
	{
		printf("%d %d %d",b,a,c);
	}
    return 0;
}

