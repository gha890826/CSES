#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Group{
	public:
		vector<int> items;
		long long int sum=0;
		void push(int i)
		{
			items.push_back(i);
			sum+=i;
		}
		void print()
		{
			for(auto &i:items) cout<<i<<' '; cout<<endl;
			cout<<"sum: "<<sum<<endl;
		}
};

int main()
{
	int n;
	cin>>n;
	vector<int> apples(n);
	for(int i=0;i<n;i++) cin>>apples[i];
	sort(apples.begin(),apples.end());
	for(int i=0;i<n;i++) cout<<apples[i]<<' '; cout<<endl;
	Group g1,g2;
	while(n>0)
	{
		if(g1.sum>g2.sum)
		{
			g2.push(apples[n-1]);
		}
		else
		{
			g1.push(apples[n-1]);
		}
		cout<<"g1: "; g1.print();
		cout<<"g2: "; g2.print();
		cout<<"***"<<g1.sum-g2.sum<<endl<<endl;
		n--;
	}
	cout<<abs(g1.sum-g2.sum);
}

