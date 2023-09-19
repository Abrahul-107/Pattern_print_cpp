#include<iostream>
using namespace std;

int main()
{
	int row ;
	cout<<"Enter your row "<<endl;
	cin>>row;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			if(i==j || i+j == row-1)
			cout<<"*";
            else
            cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}