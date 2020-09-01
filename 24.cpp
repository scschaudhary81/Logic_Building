#include<iostream>

using namespace std;

int main(){
	string country[10],wonders[10],search;
	
	//to enter the country
	for(int i=0;i<7;i++)
	getline(cin,country[i]);
	//to enter the wonders
	for(int i=0;i<7;i++)
	getline(cin,wonders[i]);
	//to enter the element to search
	getline(cin,search);
	cout<<"\n";
	for(int i=0;i<6;i++)
	{
		int compare = search.compare(country[i]);
		if(compare == 0)
		cout<<wonders[i];
	}
	
	return 0;
	
}
