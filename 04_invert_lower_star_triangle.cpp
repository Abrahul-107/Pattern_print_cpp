#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"ENTER YOUR ROW AND SIZE "<<endl;
    cin>>row;
    
    // for(int i=1;i<=row;i++)
    // {
    //     for(int j=1;j<=row;j++)
    //     {
    //         if(i<=j)
    //         cout<<" *";
            
    //     }
    //     cout<<endl;

    // }

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i+j<=row+1)
            cout<<" *";
            
        }
        cout<<endl;

     }

    return 0;
}