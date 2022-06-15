#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	if(n*(n+1)%4!=0)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES\n";
	long long int target_sum=n*(n+1)/4;
	//cout<<"***targe_sum: "<<target_sum<<endl;
	vector<long long int> s1,s2;
	long long int move=n;
	while(move>0)
	{
		if(move>target_sum)
		{
			s1.push_back(move);
		}
		else
		{
			s2.push_back(move);
			//cout<<"s2 push "<<move<<endl;
			target_sum-=move;
		}
		move--;
	}
	cout<<s1.size()<<endl;
	for(int i=0;i<s1.size();i++) cout<<s1[i]<<' ';
	cout<<endl;
	cout<<s2.size()<<endl;
	for(int i=0;i<s2.size();i++) cout<<s2[i]<<' ';
}

