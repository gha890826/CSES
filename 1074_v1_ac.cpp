#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<long long int> p;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		p.push_back(temp);
	}
	sort(p.begin(),p.end());
	long long int mid=p[n/2],x=0;
//	cout<<"mid: "<<mid<<endl;
	for(auto itt=p.begin();itt!=p.end();itt++)
	{
		x+=abs(mid-*itt);
//		cout<<"+ "<<abs(itt->first-max_val)*itt->second<<endl;
	}
	cout<<x;
}

/*
use middle value(median)
*/
