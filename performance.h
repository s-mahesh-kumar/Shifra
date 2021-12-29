#ifndef PERF
#define PERF

#include"basic.h"
#include"gotoxy.h"


void eff()
{
system("cls");	
FILE *fp1;
fp1=fopen("emp_perf.txt","r");
FILE *fp;
fp=fopen("emp_database.txt","r");
int i;
int a=2,b=2,c=2;
for(i=0;i<N;i++)
{
	
fscanf(fp1,"%d",&s[i].perf[i].w_days);
fscanf(fp1,"%d",&s[i].perf[i].rec_calls);
fscanf(fp1,"%d",&s[i].perf[i].holidays);
fscanf(fp1,"%d",&s[i].perf[i].sick_leaves);
int ef = (s[i].perf[i].w_days + s[i].perf[i].rec_calls - (s[i].perf[i].holidays-s[i].perf[i].sick_leaves))/8.3;	
	
	
fscanf(fp,"%s",&s[i].name);
fscanf(fp,"%d",&s[i].id);
fscanf(fp,"%d",&s[i].sal);

gotoxy(5,8);
printf("Excellent Employees ");
gotoxy(55,8);
printf("GOOD Employees");
gotoxy(105,8);
printf("BELOW AVERAGE Employees");
gotoxy(5,9);
printf("--------------------------------------------------------------------------------------------------------------------------");
if(ef>50)
{
	a+=2;
	gotoxy(5,8+a);
	printf("%s",s[i].name);
}

if(ef>30 && ef<50)
{
	b+=2;
	gotoxy(55,8+b);
	printf("%s",s[i].name);
}

if(ef<30)
{
 c+=2;
gotoxy(105,8+c);
printf("%s",s[i].name);	
}

}

gotoxy(155,25);

fclose(fp1);
fclose(fp);
	
exi();	
}
#endif
