#ifndef UPDATE
#define UPDATE

#include"exit.h"

void fire()
{
system("cls");

system("COLOR 07");
//    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White


printf ("\nFired Listn\n\n");
FILE *fp1;
fp1=fopen("emp_perf.txt","r");

int i;
for(i=0;i<N;i++)
{
fscanf(fp1,"%d",&s[i].perf[i].w_days);
fscanf(fp1,"%d",&s[i].perf[i].rec_calls);
fscanf(fp1,"%d",&s[i].perf[i].holidays);
fscanf(fp1,"%d",&s[i].perf[i].sick_leaves);

int ef = (s[i].perf[i].w_days + s[i].perf[i].rec_calls - (s[i].perf[i].holidays-s[i].perf[i].sick_leaves))/8.3;

if(ef<30)
{
	printf("NAME        : %s\n",s[i].name);
	printf("Employee ID : %d\n",s[i].id);
	printf("FIRED !!!!..... WE ARE SORRY TO LOOSE THE EMPLOYEE !!! :( ");
	printf("\n-------------------------------------------\n\n");
}

}
exi();
fclose(fp1);	
}

#endif 
