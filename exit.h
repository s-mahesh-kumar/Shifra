#ifndef EXIT
#define EXIT

#include"basic.h"

void comment (int n)
{
	system("cls");
	system("COLOR E4");
	if(n==1)
	printf("\nWE ARE VERY SORRY WE WILL TRY TO IMPROVE !!!! :( \n");
	else if(n==2)
	printf("\n SORRY FOR THE INCOVINIENCE WE WILL IMPROVE !!!! :( \n");
	else if(n==3)
	printf("\n THANKS FOR YOUR FEEDBACK ... YOUR FEEDBACK WILL BE TAKEN SERIUOSLY !!!! :O \n");
	else if(n==4)
	printf("\nTHANKS !!!\n WE ARE PLEASED YOU LIKED US !!! :)\n");
	else if(n==5)
	printf("\nTHANKS!!!!\n WE ARE VERY HAPPY FOR PROVIDIGN THE BEST WE CAN!!!! :) :) ..\n");
	else
	{
		printf("\nSORRY WE DINT GET YOU !!\n");
		exit(0);
		
	}
	exit(0);
}


void rate()
{
	    int res;
		system("cls");
		system("COLOR E4");
		printf("How Much do you Rate Us ?? \n\n 1. Worst \n 2. BAD \n 3.Satisfactory \n 4.Good \n 5.Excellent\n\n");
		scanf("%d",&res);
		comment(res);
}

void exi()
{
	getch();
	system("cls");
	system("COLOR 74");
//    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White

	
	int z;
	printf("If you want to go back to home page press 1 \n\n TO EXIT PRESS ANY KEY\n\n");
	scanf("%d",&z);
	
	switch(z)
	{
		case 1:
		longjmp(buf,1);
		break;
		default:
		rate();
	}
	
}

#endif
