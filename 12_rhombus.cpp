#include<iostream>
using namespace std;

void upperPart(int n) //Function for upper part of the rohmbus 
{
	for(int i=0;i<n;i++)                //for row size
	{
		for(int j=0;j<n-i-1;j++)        //for space before the star printing  
			cout<<" ";
		for(int j=0;j<2*i+1;j++)        //for printing star (*)
			cout<<"*";
		for(int j=0;j<n-i-1;j++)        //for space after the star printing 
			cout<<" ";
			
		cout<<endl;                     //NEW LINE
		
	}
}
void lowerPart(int n)   //Function for lower part of the rohmbus
{
	for(int i=n-1;i>=0;i--)             //It print the row from reverse or in decreasing order 
	{
		for(int j=0;j<n-i-1;j++)        //for space before the star printing 
			cout<<" ";
		for(int j=0;j<2*i+1;j++)        //for printing the star *
			cout<<"*";
		for(int j=0;j<n-i-1;j++)        //for space after the star printing 
			cout<<" ";
			
		cout<<endl;                     //NEW LINE
		
	}
}

int main()
{
	int row;
	cout<<"Enter your row size"<<endl;
	cin>>row;


    //Function call
    upperPart(row);
    lowerPart(row);

	return 0;
}
