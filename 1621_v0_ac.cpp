#include <iostream>
#include <map> 
using namespace std;

int main()
{
	int n;
	map<int,int> input;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		input[x]++;
	}
	cout<<input.size();
}

