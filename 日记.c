#include<stdio.h>

int main()
{
	FILE* p1=fopen("history.txt","a+");
	FILE* p2=fopen("today.txt","r");
	FILE* p3=fopen("D:\\date\\backup.txt","w");
	if(p1==NULL)
	{
		return 1; 
	}
	if(p2==NULL)
	{
		return 2; 
	}
	if(p3==NULL)
	{
		return 3; 
	}
	char a; 
	while((a=fgetc(p1))!=EOF)
	{
		fputc(a,p3);
	}
	printf("��ǰ���ռǱ���ɹ���\n");
	char b; 
	fputc('\n',p1);
	while((b=fgetc(p2))!=EOF)
	{
		fputc(b,p1);
	}
	printf("��ǰ���ռ��Ѵ�����ʷ�ռǣ�\n"); 
	
	fclose(p1);
	p1=NULL;
	fclose(p2);
	p2=NULL;
	fclose(p3);
	p3=NULL;
	return 0;
} 
