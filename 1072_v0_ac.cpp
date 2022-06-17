#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

//用尋訪會TLE，所以要用計算的方式 

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0); 
	long long int n;
	cin>>n;
	for(long long int k=1;k<=n;k++)
	{
		long long int way=0;
		if(k==1) way= 0;
		else if(k==2) way= 6;
		else if(k==3) way= 28;
		else if(k==4) way= 96;
		else
		{
			int center_len=k-4;
			long long int k_squ=k*k;
			way+=(k_squ-1-8)*(center_len*center_len);//the center square
			way+=(k_squ-1-4)*center_len*4;//4 out side edge
			way+=(k_squ-1-6)*center_len*4;//4 second out side edge
			way+=(k_squ*4-3-4-5-4)*4;//4 corner
			way/=2;
		}
		cout<<way<<endl;
	}
}
