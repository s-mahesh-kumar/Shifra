#ifndef LIST
#define LIST
#include"exit.h"

void lis()
{
system("cls");

system("COLOR A4");
//    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White
	
FILE *fp;
fp=fopen("emp_database.txt","r");
int i;
for(i=0;i<N;i++)
{
	fscanf(fp,"%s",&s[i].name);
	fscanf(fp,"%d",&s[i].id);
	fscanf(fp,"%d",&s[i].sal);
	
	printf("\nName        :%s\n",s[i].name);
	printf("Employee ID :%d\n",s[i].id);
	printf("Salary      :%d\n",s[i].sal);
	printf("------------------------------------------------------\n");
	
}
exi();
fclose(fp);	
}
#endif 
