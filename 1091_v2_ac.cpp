#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0); 
	
	int n,m;
	cin>>n>>m;
	multiset<int> h;
	
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		h.insert(temp);
	}
	
	for(int i=0;i<m;i++)
	{
		int t;
		cin>>t;
		auto upper=h.upper_bound(t);
		if(upper==h.begin())
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<*(--upper)<<endl;
			h.erase(upper);
		}
	}
}
