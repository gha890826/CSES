#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	long long int n,x;
	cin>>n>>x;
	long long int p[n];
	for(int i=0;i<n;i++) cin>>p[i];
//	cout<<"input end\n";
	sort(p,p+n);
	
//	for(int i=0;i<n;i++) cout<<p[i]<<' ';
//	cout<<endl;
	
	long long int gondolas=0,f_ptr=0,r_ptr=n-1;
	while(r_ptr>=f_ptr)
	{
		gondolas++;
//		cout<<"new gondolas\n";
//		cout<<p.front()<<endl;
//		cout<<p.back()<<endl;
		if(r_ptr>f_ptr&&p[f_ptr]+p[r_ptr]<=x)
		{
			f_ptr++;
			r_ptr--; 
		}
		else
		{
			r_ptr--;
		}
	}
	cout<<gondolas;
}

