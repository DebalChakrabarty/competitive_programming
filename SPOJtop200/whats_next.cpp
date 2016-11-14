#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
	cin>>x>>y>>z;
    while(x || y || z)
    {
       if(y-x==z-y)
	   {
		   cout<<"AP "<<z+(z-y)<<endl;
	   }
	   else
	   {
		   cout<<"GP "<<(z*(z/y))<<endl;
	   }
	   cin>>x>>y>>z;
    }
    return 0;
}
