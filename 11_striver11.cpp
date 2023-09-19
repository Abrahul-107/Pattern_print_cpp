#include<iostream>
using namespace std;

void lowerTriangular(int n)
{
	for(int i=0;i<n;i++)			//For row number print
	{
		for(int j=0;j<n;j++)		//for star printing in this condition
		{
            if(i<=j)
			cout<<"*";
		}
		cout<<endl;					//for new line
	}
	
}
void reverseLowerTriangular(int n)
{
	for(int i=0;i<n;i++)			//For row number print
	{
		for(int j=0;j<n-1;j++)		//for star printing in this condition
		{
            if(i>=j)
			cout<<"*";
		}
		cout<<endl;					//for new line
	}
}
	
int main()
{
	int row;
	cout<<"Enter your row size"<<endl;
	cin>>row;
	
	//function call for given pattern
    reverseLowerTriangular(row); 
	lowerTriangular(row);
	
	
	
	return 0;
	
}