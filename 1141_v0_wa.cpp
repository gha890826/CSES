#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main()
{
	map<int,int> songs;
	int n;
	cin>>n;
	while(n>0)
	{
		int k;
		cin>>k;
		songs[k]++;
		n--;
	}
	for(auto itr=songs.begin();itr!=songs.end();itr++)
	{
		cout<<itr->first<<" : "<<itr->second<<endl;
	}cout<<endl;
	cout<<songs.size();
}

