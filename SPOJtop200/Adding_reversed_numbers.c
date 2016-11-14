#include<stdio.h>
int main()
{
	int T,a,b,c,N,R1=0,R2=0,R3=0;
	scanf("%d",&T);
	while(T--)
	{
		R1=R2=R3=0;
		scanf("%d %d",&a,&b);
		while(a!=0)
		{
			
			N=a%10;
			R1=R1*10+N;
			a/=10;
		}
		while(b!=0)
		{
			N=b%10;
			R2=R2*10+N;
			b/=10;
		}
		c=R1+R2;
		while(c!=0)
		{
			N=c%10;
			R3=R3*10+N;
			c/=10;
		}
		printf("%d\n",R3);
			
	}
}
