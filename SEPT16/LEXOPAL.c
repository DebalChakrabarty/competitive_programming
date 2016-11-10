#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int T,len,i,j=0,k,a[50],flag=1;
	char s[12345],r[12345];
	char q[50][12345];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",s);
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			flag=1;
			if(s[i]=='.')
			{
				if(s[len-i-1]=='.')
				{
					s[i]='a';
					s[len-i-1]='a';
				}
				else
				{
					s[i]=s[len-i-1];
				}
			}
		}
		k=len;
		for(i=0;i<len;i++)
		{
			if(s[i]!=s[len-i-1])
			{
				flag=0;
			}
		}
		if(flag==0)
			printf("-1\n");
		else
			printf("%s\n",s);
	}
} 
