#include<iostream>
using namespace std;

int main()
{
    int row,col;
     cout<<"ENTER YOUR ROW SIZE "<<endl;
    cin>>row;
    

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i>=j)
            cout<<" * ";

        }
        cout<<endl;

    }

    return 0;
}