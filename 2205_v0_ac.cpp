#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0); 
	int n;
	cin>>n;
	bool gray[n]={0};
	int step=pow(2,n);
	for(int i=n;i>0;i--) cout<<gray[i-1];cout<<endl;
	while(step>1)
	{
//		cout<<"step: "<<step<<endl; 
		if(step%2==0)
		{
			gray[0]=!gray[0];
		}
		else
		{
			//find first 1 and reverse it's next element
			int i=0;
			while(!gray[i]) i++;
			i++;
			gray[i]=!gray[i];
		}
		for(int i=n;i>0;i--) cout<<gray[i-1];cout<<endl;
		step--;
	}
}

//I thought it'll TLE, but i got AC.
