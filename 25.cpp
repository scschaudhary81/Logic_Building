#include<iostream>
#include<string.h>

using namespace std;


int main(){
	int marks[10],temp;
	string name[10],tempW;
    int i,j;
    int greater;
    
    
    for(i=0;i<5;i++)
    getline(cin,name[i]);
    
    for(i=0;i<5;i++)
    cin>>marks[i];
    
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4-i;j++)
    	{
    		if(marks[j]>=marks[j+1])
    		{
    			if(marks[j]>marks[j+1])
    			{
    				temp = marks[j];
    				marks[j]=marks[j+1];
    				marks[j+1]=temp;
    				tempW = name[j];
    				name[j]=name[j+1];
    				name[j+1]=tempW;
				}
				else
				{
					greater = name[j].compare(name[j+1]);
					if(greater>=0)
					{
						temp = marks[j];
    					marks[j]=marks[j+1];
    					marks[j+1]=temp;
    					tempW = name[j];
    					name[j]=name[j+1];
    					name[j+1]=tempW;
					}
				}
			}
    		
		}
	}
	for(i=0;i<5;i++)
    cout<<"\n"<<marks[i]<<" "<<name[i];
	return 0;
}
