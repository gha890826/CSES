#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long int x[n],ans=0;
	cin>>x[0];
	for(int i=1;i<n;i++)
	{
		cin>>x[i];
		if(x[i]-x[i-1]<0)
		{
			ans+=x[i-1]-x[i];
			x[i]=x[i-1];
			//cout<<"ans + "<<x[i-1]-x[i]<<endl;
		}
	}
	cout<<ans;
}
