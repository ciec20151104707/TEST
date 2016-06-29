#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[80];
	char b,c[100];
	FILE * fp1 = fopen("export.gpx","r");
	if (fp1==NULL)
	{
		printf("不能打开文件!");
		exit(1);
	}
	printf("能打开文件！\n");
	fgets(str,500,fp1);
	printf("%s",str);
	
}
