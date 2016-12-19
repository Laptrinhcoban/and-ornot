#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{

	float n;
	printf("Diem So n:");
	scanf("%f",&n);
	if(n>=9)
	{
		printf("Xuat Xac");
	}
	else if(8<=n && n<9){
		printf("Gioi");
	}
	else if(7<=n && n<8){
		printf("Kha");
	}
	else if(6<=n && n<7){
		printf("Trung Binh Kha");
	}
	else if(5<=n && n<6){
		printf("Trung Binh");
	}
	else 
	{
		printf("Yeu");
	}
    return 0;
}

