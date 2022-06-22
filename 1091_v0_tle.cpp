#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> h(n);
	
	for(int i=0;i<n;i++) cin>>h[i];
	sort(h.begin(),h.end());
//	for(int i=0;i<n;i++) cout<<h[i]<<' ';cout<<endl;
	
	for(int i=0;i<m;i++)
	{
		int t;
		cin>>t;
		if(h.size()==0)
		{
			cout<<"-1\n";
			continue;
		}
		for(auto it=h.begin();it!=h.end();it++)
		{
			if(*it>t&&it==h.begin())
			{
				cout<<"-1\n";
				break;
			}
			else if(*it<=t)
			{
				cout<<*(it)<<endl;
				h.erase(it);
				break;
			}
			else if(*it>t)
			{
				cout<<*(it-1)<<endl;
				h.erase(it-1);
				break;
			}
		}
	}
}

