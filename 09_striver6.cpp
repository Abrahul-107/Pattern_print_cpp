#include<iostream>
using namespace std;

int main()
{
	int row;
	cout<<"Enter your row size "<<endl;
	cin>>row;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			if(i+j<row)
			{
				cout<<j+1<<" ";
			}
		}
        cout<<endl;
	}
	
	return 0;
}
	