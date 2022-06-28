#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n,max_val,max_count=0,sum=0;
	cin>>n;
	map<int,int> p;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		p[temp]++;
		if(p[temp]>max_count)
		{
			max_val=temp;
			max_count=p[temp];
		} 
	}
//	cout<<"max_val: "<<max_val<<"\nmax_count: "<<max_count<<endl;
	int x=0;
	for(map<int,int>::iterator itt=p.begin();itt!=p.end();itt++)
	{
		x+=abs(itt->first-max_val)*itt->second;
//		cout<<"+ "<<abs(itt->first-max_val)*itt->second<<endl;
	}
	cout<<x;
}
