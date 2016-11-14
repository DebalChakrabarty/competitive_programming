#include<stdio.h>
#include<math.h>
#define MAX_SIZE 1000000001						// max size of ip can be 10^9
#define DIFFNM 100001							// given max diff i.e n-m can be 10^5
#define SQRT 31623								// sqrt of 10^9
#define NO_OF_PRIMES_IN_SQRT 3401				// no of prime in sqrt of 10^9
 
long long int a[DIFFNM] = {1};
//long long int is_prime[DIFFNM + 1] = {1};
long long int primes[SQRT] = {1},is_prime[NO_OF_PRIMES_IN_SQRT];
 
void display(long long int arr[],long long int n)
{
	int i = 0;
	for(i = 0;i < n;i++)
	{
		printf("%lld , ",arr[i]);
	}
	printf("\n\n");
}
void sieveOfEra()
{
    int i = 0,j = 0,count = 0;
    for(i = 2;i <= SQRT;i++)
    {
        if(primes[i] == 1)
            continue;
        for(j = 1;j * i <= SQRT;j++)
        {
            primes[j * i] = 1;
        }
        is_prime[count]=i;
        count++;
    }
}
void segmentedSieveOfEra(long long int m,long long int n)
{
	long long int i,j,k,diff,p;
    diff = n-m;
    for(i = 0;i < NO_OF_PRIMES_IN_SQRT;i++)
    {
        j = is_prime[i];
        k = (m-1)/j;
        k *= j;
        k += j;
        if(k == j)
            k += j;
        for(p = k-m;p <= diff;p+=j)
            a[p] = 1;
    }
}
int main(void)
{
	long long int i = 0,n = 0,m = 0,t = 0,j = 0,diff = 0;
	scanf("%lld",&t);
	sieveOfEra();
	for(i = 0;i < t;i++)
	{
		scanf("%lld%lld",&m,&n);
		segmentedSieveOfEra(m,n);
		if(m == 1)
			a[0] = 1;
		diff = n - m;
		for(j = 0;j <= diff;j++)
		{
			if(a[j] != 1)
				printf("%lld\n", j+m);
			a[j] = 0;
		}
		printf("\n");
	}
} 
