#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int ans =2;
	n--;
	while(n>0)
	{
		ans*=2;
		ans%=1000000007;
		n--;
	}
	cout<<ans;
}

