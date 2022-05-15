#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	if(n<=3)
	{
		cout<<"NO SOLUTION";
		return 0;
	}
	int temp=n-1;
	while(temp>0)
	{
		cout<<temp<<" ";
		temp-=2;
	}
	temp=n;
	while(temp>0)
	{
		cout<<temp<<" ";
		temp-=2;
	}
}
