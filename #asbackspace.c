#include<stdio.h>
int main()
{
	int i,j;
	char str[256];
	printf("enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='#')
		{
			str[i-1]='#';
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='#')
		   printf("%c",str[i]);
	}
}
