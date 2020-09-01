#include<iostream>

using namespace std;


int main(){
	int start = 0;
	int length = 0;
	int start_index = 0;
	string sentence;
	getline(cin,sentence);
	for(int i=0;i<=sentence.length();i++){
		if((sentence[i] == ' ')||(sentence[i] == '\0'))
		{
			if(length>5)
			{
				string to_print = sentence.substr(start_index,length);
				cout<<to_print<<" ";
			}
			start_index = i+1;
			length = 0;
		}
		else
		length++;
	}
	
	return 0;
}
