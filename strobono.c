#include<stdio.h>
#include<string.h>
int strobono(char A[])
{
	int i,l,r,flag=0;
	l=0;
	r=strlen(A)-1;
	while(l<r)
	{
		if((A[l]=='6'&& A[r]=='9') ||(A[l]=='9'&& A[r]=='6')  ||(A[l]=='8'&& A[r]=='8') || (A[l]=='0'&& A[r]=='0'))
		{
			l++;
			r--;
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}	
	}
	return flag;
	
}
int main()
{
	char str[256];
	int i,n;
	printf("enter a number");
	gets(str);
	if(strobono(str)==1)
	    printf("true");
	else
	    printf("false");
}
