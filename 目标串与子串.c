#include<stdio.h>
#include<string.h>

char s1[20],s2[20]; 

int main()
{
	int len1,len2,i,j,k;
	printf("Ŀ�괮Ϊ:");
	gets(s1);
	printf("������ģʽ��:");
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2); 
	for(i=0;i<=len1-len2;i++)//Ŀ�괮����ʼλ�� 
	{
		
		for(k=0;k<len2;k++)//���Ӵ��ϴ���ʼλ����һ�����Ƚ�
		{
			if(s2[k]==s1[i+k])continue;
			else break; 
		} 
		if(k==len2)
		{	
			printf("ƥ��ɹ�,��ʼλ��Ϊ%d\n",i);
		 	break;
		}
	} 	
	if(k!=len2)printf("ƥ��ʧ��\n");
	return(0); 	
 } 
