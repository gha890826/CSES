#include <iostream>
using namespace std;
int main()
{
	unsigned long long int n;
	cin>>n;
	unsigned long long int ori_sum;
	if(n%2==0)
		ori_sum=n/2*(n+1);
	else
		ori_sum=(n+1)/2*n;
	//cout<<"***ori_sum "<<ori_sum<<endl;
	while(n>1)
	{
		int temp;
		cin>>temp;
		ori_sum-=temp;
		n--;
	}
	cout<<ori_sum;
	
}
//�̫�o�{�On�p��ɶW�Lint�Ӥw�A���n���A�N�n�F 
