#include<iostream>


//to display in title case
using namespace std;

int main(){
	string word;
	int a=1;
	getline(cin,word);
	for(int i=0;i<word.length();i++)
	{   
		if(word[i]==' ')
		{
			a=1;	
		}	
		else if(a==1)
		{
			a=0;
			if((word[i]>=97)&&(word[i]<=123))
			  word[i]=word[i]-32;
		}
	}
	cout<<word;
	
	
	
	return 0;
}
