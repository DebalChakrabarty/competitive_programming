#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	long long int  s,v;
	double h,t;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld %lld",&s,&v);
		h=((double)s/(double)v);
		t=(2.0/3.0)*h;
		printf("%lf\n",t);
	}
	return 0;
}
