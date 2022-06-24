#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

class Movie{
	public:
		int start,finish;
};

bool my_comp(Movie a, Movie b)
{
	return a.start<b.start;
}

int main()
{
	int n;
	cin>>n;
	vector<Movie> movie(n),watch;
	for(int i=0;i<n;i++)
	{
		cin>>movie[i].start;
		cin>>movie[i].finish;
	}
	sort(movie.begin(),movie.end(),my_comp);
//	for(int i=0;i<n;i++) cout<<"movie "<<i<<" "<<movie[i].start<<" to "<<movie[i].finish<<endl;
	watch.push_back(movie[0]);
	for(int i=1;i<n;i++)
	{
		if(movie[i].start>=watch.back().finish)
		{
			watch.push_back(movie[i]);
//			cout<<"push movie "<<i<<endl;
		}
		else
		{
			if(movie[i].finish<watch.back().finish)
			{
				watch.pop_back();
//				cout<<"pop last watch"<<endl;
				watch.push_back(movie[i]);
//				cout<<"push movie "<<i<<endl;
			}
		}
	}
//	for(int i=0;i<watch.size();i++) cout<<"watch "<<i<<" "<<movie[i].start<<" to "<<movie[i].finish<<endl;
	cout<<watch.size();
}

