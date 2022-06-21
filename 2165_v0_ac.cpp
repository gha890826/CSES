#include <iostream>
#include <sstream>
using namespace std;

int hanoi(string &output,int n,string a,string b, string c)
{
	int ans=0;
	if(n==1)
	{
//		cout<<"move "<<n<<" frome "<<a<<" to "<<c<<endl;
		ans++;
		output+=(a+" "+c+"\n"); 
	}
	else
	{
		ans+=hanoi(output,n-1,a,c,b);
//		cout<<"move "<<n<<" frome "<<a<<" to "<<c<<endl;
		ans++;
		output+=a+' '+c+'\n';
		ans+=hanoi(output,n-1,b,a,c);
	}
	return ans;
}

int main()
{
	int n;
	string output;
	cin>>n;
	cout<<hanoi(output,n,"1","2","3")<<endl;
	cout<<output;
}

