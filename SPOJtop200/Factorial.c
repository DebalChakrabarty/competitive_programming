#include<stdio.h>
int main()
{
	long long int T,N,s,i;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld",&N);
		s=0;
		for(i=5;i<=N;i*=5)
		{
			s+=N/i;
		}
		printf("%lld\n",s);
	}
}
 
