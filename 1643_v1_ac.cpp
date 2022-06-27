#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	long long int max_here,max_all;
	max_here=max_all=a[0];
	for(int i=1;i<n;i++)
	{
		max_here=max(a[i],max_here+a[i]);
		max_all=max(max_here,max_all);
	}
	cout<<max_all;
}
 /*
 use Kadane's algorithm
 */
