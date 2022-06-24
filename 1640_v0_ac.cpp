#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	vector<int> input(n),a(n);
	for(int i=0;i<n;i++) cin>>input[i];
	a=input;
	sort(a.begin(),a.end());
//	for(int i=0;i<n;i++) cout<<a[i]<<' ';cout<<endl;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		auto iter=lower_bound(a.begin(),a.end(),x-a[i]);
		if(iter!=a.end()&&*iter==x-a[i]&&iter!=a.begin()+i)
		{
			flag=true;
			auto iter1=find(input.begin(),input.end(),a[i]);
			auto iter2=find(input.begin(),input.end(),*iter);
			if(iter1==iter2)
			{
				iter2=find(iter2+1,input.end(),*iter);
			}
			int pos1=iter1-input.begin()+1;
			int pos2=iter2-input.begin()+1;
			cout<<pos1<<" "<<pos2;
			break;
		}
	}
	if(!flag) cout<<"IMPOSSIBLE";
}

/*
我應該沒錯啊
可是網站測資好像有問題
input:
3 4
1 3 2
correct output:
1 2
user output:
1 3

我問號

解決:我傻 他要的是位置 
*/ 
