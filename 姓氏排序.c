#include<stdio.h>
#include<string.h>

char ch[4][20]={"Zhao","Qian","Sun","Li"}; 
int i; 

int main()
{
	printf("原数组为:\n");
	for(i=0;i<4;i++)puts(ch[i]);
	
	printf("升序为:\n");
	return(0); 
 } 
