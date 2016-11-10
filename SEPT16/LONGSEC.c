#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int T;
	char D[100000];
	int i=0,j=0,len,k=0,a[50],h=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",&D);
		len=strlen(D);
		//printf("%d",len);
		while(len--)
		{
			//printf("%c\n",D[h]);
			if(D[h]=='1')
				i++;
			if(D[h]=='0')
				j++;
			h++;	
		}
		if(i==1 || j==1)
			a[k++]=1;
		else
			a[k++]=0;
		i=0;
		j=0;
		h=0;
	}
	for(i=0;i<k;i++)
	{
		if(a[i]==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
} 
