#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int my_binary_search(vector<int> &h, int start, int end, int val)
{
//	cout<<"search start:"<<start<<" end:"<<end<<endl;
	if(end==start) 
	{
		if(h[start]<=val) return start;
		else return start-1;
	}
	
	int mid=(start+end)/2,index;
	if(h[mid]==val) index=mid;
	else if(h[mid]>val) index=my_binary_search(h,start,mid,val);
	else if(h[mid]<val) index=my_binary_search(h,mid+1,end,val);
	return index;
}


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0); 
	
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
		if(t<h.front()||h.size()<=0)
		{
			cout<<"-1\n";
		}
		else
		{
			int index=my_binary_search(h,0,h.size()-1,t);
//			cout<<"index: "<<index<<endl;
			cout<<h[index]<<endl;
			h.erase(h.begin()+index);
		}
	}
}
