#include<stdio.h>

int main()
{
	char ch1,ch2=0;
	printf("����Ϊ");
	while((ch1=getchar())!='\n') 
	{	 
		if(ch2==0)printf("����Ϊ"); 
		if((ch1>64&&ch1<87)||(ch1>96&&ch1<119))ch2=ch1+4 ;
		if((ch1>86&&ch1<91)||(ch1>118&&ch1<123))ch2=ch1-22;
		putchar(ch2);	
	}	
	if(ch2==0)printf("����Ϊ\n"); 
	else printf("\n");	
	return 0;
}
