#include<stdio.h>
#include<limits.h>
#include<inttypes.h> 
#define ll long long int
ll GCD(ll m,ll n)
{
    if(n == 0) 
    	return m;
    return GCD(n, m % n);
}
int main()
{
	ll a[500],max,min,m,T,N,i,j,k,s=0;;
	scanf("%lld",&T);
	while(T--)
	{	
		m=LLONG_MAX;
		scanf("%lld",&N);
		for(i=0;i<N;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			{
				max=(a[i]/GCD(a[i],a[j]))*a[j];
				if(max<m)
					m=max;
			}
		}
		printf("%lld\n",m);
	}
} 
