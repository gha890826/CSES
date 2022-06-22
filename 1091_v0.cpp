#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int smaller_binary_search(int start, int end, vector<int> vec, int val)
{
	cout<<"search- start: "<<start<<" end: "<<end<endl;
	if(start==end)
	{
		return start;
	}
	int index;
	if(vec[(start+end)/2]==val) return (start+end)/2;
	else if(vec[(start+end)/2]<val)
	{
		return smaller_binary_search((start+end)/2+1,end,vec,val);
	}
	else
	{
		return smaller_binary_search(start,(start+end)/2-1,vec,val);
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> h(n);
	
	for(int i=0;i<n;i++) cin>>h[i];
	sort(h.begin(),h.end());
	for(int i=0;i<n;i++) cout<<h[i]<<' ';cout<<endl;
	
	for(int i=0;i<m;i++)
	{
		int t;
		cin>>t;
		if(t>h.back())
		{
			cout<<"-1\n";
		}
		else
		{
			int index=smaller_binary_search(0,n-1,h,t);
			cout<<"index: "<<index<<endl;
			cout<<h[index]<<endl;
			h.erase(h.begin()+index);
		}
	}
}

