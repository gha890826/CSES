#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	
	sort(a,a+n);
	sort(b,b+m);
	
//	for(int i=0;i<n;i++) cout<<a[i]<<' ';
//	cout<<endl;
//	for(int i=0;i<m;i++) cout<<b[i]<<' ';
//	cout<<endl;
	
	int a_itr=0,b_itr=0,match=0;
	while(a_itr<n&&b_itr<m)
	{
		if(abs(a[a_itr]-b[b_itr])<=k)
		{
			match++;
			a_itr++;
			b_itr++;
		}
		else
		{
			if(a[a_itr]>b[b_itr]) b_itr++;
			else a_itr++;
		}
	}
	cout<<match;
}

