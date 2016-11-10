#include<stdio.h>
#include<math.h>
int main()
{
	int T,count=0,pcount;
	long long int m,n,c,i,j;
	int max,min;
	scanf("%d",&T);
	while(T--)
	{
		count=0;
		scanf("%lld %lld %lld",&m,&n,&c);
		if(c>m*n)
		{
			printf("0\n");
			continue;
		}
		else
		{
			max= (m>n)? m : n;
			min=(m+n)-max;
			for(i=1;i<=min;i++)
			{
				if(c%i==0)
				{
					if(c/i>=1 && c/i<=max)
						count++;
				}
			}
			printf("%d\n",count);
			
		}
	}
} 
