#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int K,T,a[400][400],i,j,b[400][400],l=0,m,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&K);
		m=(K+1)/2;
		n=(K-1)/2;
		for(i=1;i<=K;i++)
			{
				for(j=1;j<=K;j++)
				{
					b[i][j]=(int)(fabs(i-m)+fabs(j-m));
					if((i+j-2)%K+1==1)
					{
						a[i][j]=n+1;
					}
					else if((i+j-2)%K+1==n+1 && b[i][j]>=K/2)
					{
						a[i][j]=1;
					}
					else
					{
							a[i][j]=(i+j-2)%K+1;
					}
				}
		   }
		for(i=1;i<=K;i++)
		{
			for(j=1;j<=K;j++)
			{
				printf("%d ",a[j][i]);
			}
			printf("\n");
		}
	}
}
