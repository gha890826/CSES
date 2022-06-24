#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Event{
	int action;//1: in, -1:out
	int time;
};

bool my_sort(Event a, Event b)
{
	return a.time<b.time;
}

int main()
{
	int n;
	cin>>n;
	vector<Event> customers;
	
	for(int i=0;i<n;i++)
	{
		Event a,b;
		
		a.action=1;
		cin>>a.time;
		customers.push_back(a);
		
		b.action=-1;
		cin>>b.time;
		customers.push_back(b);
	}
	
	sort(customers.begin(),customers.end(),my_sort);
//	for(int i=0;i<customers.size();i++) cout<<" time: "<<customers[i].time<<"\taction: "<<customers[i].action<<endl;
	
	int max=0,now=0;
	for(int i=0;i<customers.size();i++)
	{
		if(customers[i].action==1) now++;
		else now--;
		
		if(now>max) max=now;
	}
	cout<<max;
}

