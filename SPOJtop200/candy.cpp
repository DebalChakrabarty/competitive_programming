#include<iostream>
using namespace std;
int main()
{
    int N,a[10000];
	long long s=0,C,M;
	cin>>N;
	while(N!=-1)
	{
		s=0;
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		if(s%N!=0)
		{
			cout<<-1<<endl;
		}
		else
		{
			long answer=0;
			for(int i=0;i<N;i++)
			{
				if(a[i]<s/N)
					answer+=(s/N)-a[i];
			}
			cout<<answer<<endl;
		}
		cin>>N;
	}
    return 0;
}
