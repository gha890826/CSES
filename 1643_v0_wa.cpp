#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[n];
	int max_index=0;
	for(int i=0;i<n;i++)
	{
		int input;
		cin>>input;
		if(i!=0)
		{
			x[i]=x[i-1]+input;
			if(x[i]>x[max_index]) max_index=i;
		}
		else
		{
			x[i]=input;
		}
	}
	for(int i=0;i<n;i++) cout<<x[i]<<' ';cout<<endl;
	int max=x[n-1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(x[i]-x[j]>max) max=x[i]-x[j];
		}
	}
	cout<<max;
}


