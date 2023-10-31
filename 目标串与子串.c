#include<stdio.h>
#include<string.h>

char s1[20],s2[20]; 

int main()
{
	int len1,len2,i,j,k;
	printf("目标串为:");
	gets(s1);
	printf("请输入模式串:");
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2); 
	for(i=0;i<=len1-len2;i++)//目标串上起始位置 
	{
		
		for(k=0;k<len2;k++)//在子串上从起始位置上一个个比较
		{
			if(s2[k]==s1[i+k])continue;
			else break; 
		} 
		if(k==len2)
		{	
			printf("匹配成功,起始位置为%d\n",i);
		 	break;
		}
	} 	
	if(k!=len2)printf("匹配失败\n");
	return(0); 	
 } 
