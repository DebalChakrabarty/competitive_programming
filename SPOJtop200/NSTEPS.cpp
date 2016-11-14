#include<iostream>
using namespace std;
int main()
{
	int T,x,y;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>x>>y;
		if(x==0 && y==0)
			cout<<0<<endl;
		else if(x==1 && y==1)
			cout<<1<<endl;
		else
		{
			if(y>x)
				cout<<"No Number"<<endl;
			else if(y==x-2 || x==y)
				{
					if(x%2==0 && y%2==0)
						cout<<x+y<<endl;
					else
						cout<<x+y-1<<endl;
				}
			else
			{
					cout<<"No Number"<<endl;
			}
		}
	}
}
