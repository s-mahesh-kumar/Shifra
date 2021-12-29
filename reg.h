#ifndef REG
#define REG

#include"basic.h"
#include"box.h"
#include"reg.h"
#include"gotoxy.h"

int Z=20;
int check(char a[] , char b[] )
{
	char name[100], password[100];
	FILE *fp;
	fp = fopen ("credentials.txt","r");
	int i,c=0;
	for(i=0;i<Z;i++)
	{
		fscanf(fp,"%s",&name);
		fscanf(fp,"%s",&password);
		
		if(strlen(a)==strlen(name) && strlen(b)==strlen(password))
        {
        	int j;
        	for(j=0;j<strlen(a);j++)
        	{
        		if(a[j]!=name[j])
        		return 0;
			}
			
			for(j=0;j<strlen(b);j++)
        	{
        	if(b[j]!=password[j])
        	return 0;    
		    }
		}
		else
		c++;

	}
	
	fclose(fp);	
	if(c!=Z)
	return 1;
	else
	return 0;
}





void reg()
{

char name[100],password[100];
	gotoxy(70,27.5);
	printf("Name     : ");
	scanf("%s",name);
	gotoxy(70,30);
	printf("password : ");
	scanf("%s",password);
	
	if(check(name,password)==0)
	{
		gotoxy(70,40);
		printf("INVAID NAME OR PASSWORD !!!!! ");
		box();
		reg();
	}
	
}

#endif 
