#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define lli long long int
using namespace std;

int main()
{
	lli n;
	cin>>n;
	vector<lli> p(n);
	lli total=0;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		total+=p[i];
	}
	lli ans=INT64_MAX;
	for(lli i=0;i<pow(2,n);i++)
	{
		lli cur=0;
		for(int j=0;j<n;j++)
		{
			if(i & 1<<j) cur+=p[j];
		}
		cur=abs((total-cur)-cur);
//		cout<<"cur: "<<cur<<endl;
		ans=min(ans,cur);
	}
	cout<<ans;
}

