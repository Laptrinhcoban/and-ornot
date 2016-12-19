#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon9.inp","r",stdin);
	int a;
	scanf("%d",&a);
	if(a>=0 && a%2==0)
	{
		printf("%d la so chan",a);
	}
	else if(a>0 && a%2==1)
	{
		printf("%d la so le",a);
	}
	else
	{
		printf("a la so am");
	}
    return 0;
}

