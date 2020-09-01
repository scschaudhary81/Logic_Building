#include<iostream>

using namespace std;


int main()
{
	string sentence;
	getline(cin,sentence);
	for(int i=0;i<sentence.length();i++)
	{
		if(((sentence[i]>=65)&&(sentence[i]<=101))||((sentence[i]>=97)&&(sentence[i]<=123)))
		{
			if((sentence[i]>=65)&&(sentence[i]<=101))
			sentence[i] = sentence[i]+32;
			else
			sentence[i] = sentence[i]-32;
		}
	}
	cout<<sentence;
	return 0;
}
