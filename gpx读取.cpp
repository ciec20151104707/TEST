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
		printf("���ܴ��ļ�!");
		exit(1);
	}
	printf("�ܴ��ļ���\n");
	fgets(str,500,fp1);
	printf("%s",str);
	
}
