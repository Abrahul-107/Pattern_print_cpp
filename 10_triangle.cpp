#include<iostream>
using namespace std;

int main()
{
	int row;
	cout<<"Enter your size of row"<<endl;
	cin>>row;						//input
	for(int i=0;i<row;i++)			//row number print
	{
		for(int j=0;j<row-i-1;j++)	//for space before star printing 
			cout<<" ";
		for(int j=0;j<2*i+1;j++)	//for star printing
			cout<<"*";
		for(int j=0;j<row-i-1;j++)	//for space after start
			cout<<" ";
		
		cout<<endl;
		
	}
	return 0;
	
}

		