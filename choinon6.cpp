#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{	
	freopen("choinon6.inp","r",stdin);
	int SoGioLam,Luong,LuongTong,GioThua,LuongGioThua;
	scanf("%d",&SoGioLam);
	scanf("%d",&Luong);
	if(SoGioLam>40)
	{
		LuongTong=SoGioLam*Luong+GioThua*(LuongGioThua*2);
		printf("LuongTong= %d\n",LuongTong);
	}
	else
	{
		LuongTong=SoGioLam*Luong;
		printf("LuongTong= %d\n",LuongTong);
	}
    return 0;
}

