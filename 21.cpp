#include<iostream>


using namespace std;

int palindrome(string s)
{
	int start=0;
	int end = s.length();
	int flag = 0;
	
	
	for(int i = 0;i<end/2;i++)
	{
		if(s[i]!=s[end-1-i])
		{
			flag=1;
			break;
		}
	
	}
	if(flag==0)
		cout<<s<<" ";
	
	return 0 ;
	
}
int main(){
	
	string sentence;
	int start_index = 0;
	int length = 0;
	getline(cin,sentence);
	for(int i=0;i<=sentence.length();i++)
	{
		if((sentence[i]==' ')||(sentence[i]=='\0'))
		{
			string word = sentence.substr(start_index,length);
			palindrome(word);
			length=0;
			start_index =  i+1;
		}
		else
		{
			length++;
		}
	}
	return 0;
}




