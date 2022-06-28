#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
	string n;
	vector<string> ans;
	cin>>n;
	sort(n.begin(),n.end());
	do{
		ans.push_back(n);
	}while(next_permutation(n.begin(),n.end()));
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
}

