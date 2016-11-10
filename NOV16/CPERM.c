#include<stdio.h>
#include<math.h>
#define ll unsigned long long int
#define M 1000000007
ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%M;
    else
        return (x*temp*temp)%M;
}
int main()
{
   ll N,T,i;
   scanf("%lld",&T);
   while(T--)
   {
   		scanf("%lld",&N);
   		if(N!=1)
    		printf("%lld\n", power(2, N-1)-2);
    	else
    		printf("0\n");
   }
   return 0;
} 
