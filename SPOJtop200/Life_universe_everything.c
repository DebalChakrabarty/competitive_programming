#include<stdio.h>
int main()
{
	  int a[100],N;
	  int t=1,i=0,j;
	  while(t)
	  {
		  scanf("%d",&N);
		  if(N!=42)
			  a[i++]=N;
		  else
			  t=0;
	  }
	  for(j=0;j<i;j++)
		  printf("%d\n",a[j]);
}
