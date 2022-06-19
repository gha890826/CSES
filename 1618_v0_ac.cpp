#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int num_5=0;
	int n;
	cin>>n;
	while(n%5!=0)
		n--;
	while(n>0)
	{
		int temp=n;
		while(temp%5==0)
		{
			num_5++;
			temp/=5;
		}
		n-=5;
	}
	cout<<num_5;
}

