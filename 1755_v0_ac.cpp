#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	string n;
	cin>>n;
	map<char,int> symbols;
	for(int i=0;i<n.length();i++)
	{
		symbols[n[i]]++;
	}
//	for (map<char,int>::iterator it= symbols.begin();it != symbols.end();it++)
//	{
//    	std::cout << "id: " << (*it).first << ", num: " << (*it).second << "\n";
//	}
	int odd=0;
	char index;
	for(map<char,int>::iterator it= symbols.begin();it != symbols.end();it++)
	{
		if((*it).second%2!=0)
		{
			odd++;
			index=(*it).first;
		} 
	}
	if(odd>1)
	{
		cout<<"NO SOLUTION";
		return 0;
	}
	for(map<char,int>::iterator it= symbols.begin();it != symbols.end();it++)
	{
		if((*it).second %2==0)
		{
			for(int j=0;j<(*it).second/2;j++)
			{
				cout<<(*it).first;
			}
		}
	}
//	cout<<"\nODD\n";
	if(odd)
	{
		for(int i=0;i<symbols[index];i++)
		{
			cout<<index;
		}
	}
//	cout<<"\nODD\n";
	for(map<char,int>::reverse_iterator it= symbols.rbegin();it != symbols.rend();it++)
	{
		if((*it).second %2==0)
		{
			for(int j=0;j<(*it).second/2;j++)
			{
				cout<<(*it).first;
			}
		}
	}
}

