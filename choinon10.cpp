#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	freopen("choinon10.inp","r",stdin);
	int TienThueBaoDienKe=1000,DinhMucSD=50,SoDienSD,VuotDinhMuc,TongTien;
	scanf("%d",&SoDienSD);
	VuotDinhMuc=SoDienSD-DinhMucSD;
	if(VuotDinhMuc<=50)
	{
		TongTien=SoDienSD*480+TienThueBaoDienKe;
		printf("Tong Tien= %d",TongTien);	
	}
	else if(50<VuotDinhMuc && VuotDinhMuc<100)
	{
		TongTien=SoDienSD*700+TienThueBaoDienKe;
		printf("Tong Tien= %d",TongTien);
	}
	else if(VuotDinhMuc>=100)
	{
		TongTien=SoDienSD*900+TienThueBaoDienKe;
		printf("Tong Tien= %d",TongTien);
	}
	else
	{
		TongTien=SoDienSD*230+TienThueBaoDienKe;
	}
    return 0;
}

