#ifndef BOX
#define BOX

#include"gotoxy.h"

void box()
{
	system("cls");
	gotoxy(70,10);
	printf("--------------PERFORMANCE APPRISAL SYSTEM----------\n");
	int y=15;
	gotoxy(55,y);
	int i,j,n=40;
	for(i=1;i<=n/2;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(i==1||j==1||i==n/2||j==2*n)
			printf("+");
			else
			printf(" ");
		}
		gotoxy(55,++y);
	}
	

}
#endif 
