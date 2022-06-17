#include <iostream>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t>0)
	{
		long long int x,y;
		cin>>y>>x;
		long long int large;
		if(x>y) large=x;
		else large=y;
		long long int index=large*large;
		if(large%2==1)
		{
			if(x>=y)
			{
				index-=(y-1);
			}
			else
			{
				index-=large-1;
				index-=(large-x);
			}
		} 
		else
		{
			if(x>=y)
			{
				index-=large-1;
				index-=large-y;
			}
			else
			{
				index-=x-1;
			}
		}
		cout<<index<<endl;
		t--;
	}
}

