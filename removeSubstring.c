//remove substring from a string
#include<stdio.h>
#include<string.h>
void removeword(char s[100],char w[100])
{
  int sl,wl,i,k,j,tl;
  sl=strlen(s);
  wl=strlen(w);
  for(i=0;i<sl;i++)
  {
    k=i;
    for(j=0;j<wl;j++)
    {
      if(s[i]==w[j])
         i++;
        else
          {
        i=i-j;;  
        break;
        }
    }
    tl=i-k;
    if(tl==wl)
    {
      i=k;
      for(j=i;j<(sl-wl);j++)
          s[j]=s[j+wl];
      sl=sl-wl;
      s[j]='\0';
    }
  }
  printf("\n%s",s);
}
int main()
{
  char s[100],w[100];
  printf("Enter the string : ");
  gets(s);
  printf("Enter the word to delete : ");
  gets(w);
  removeword(s,w);
}