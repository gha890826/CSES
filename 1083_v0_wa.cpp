#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int ori_sum=(1+n)/2*n;
	long long int sum=0;
	while(n>1)
	{
		int temp;
		cin>>temp;
		sum+=temp;
		n--;
	}
	cout<<ori_sum-sum;
	cout<<"***ori_sum "<<ori_sum<<endl;
	cout<<"***sum "<<sum;
}
//ori_sum計算時會超過long long int 
