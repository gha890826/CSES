#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		cin.tie(0);
		ios::sync_with_stdio(0); 
		int a,b;
		bool flag=0;
		cin>>a>>b;
		int big=max(a,b),small=min(a,b);
		
		int diff=big-small;
		int base=small-diff;
		if(base%3==0&&(big-base)==(small-base)*2)
		{
			flag=1;
		}
		if(base<0) flag=0;
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
		t--;
	}
}

