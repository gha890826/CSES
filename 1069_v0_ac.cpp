#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	char in,last=' ';
	int length=0,max_length=0;
	cin>>input;
	for(int i=0;i<input.length();i++)
	{
		in=input[i];
		if(in==last)
			length++;
		else
		{
			if(length>max_length) max_length=length;
			last=in;
			length=1;
		}
	}
	if(length>max_length) max_length=length;
	cout<<max_length;
}
