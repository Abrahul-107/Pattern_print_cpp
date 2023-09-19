#include<iostream>
using namespace std;

int main()
{
    int row,col;
     cout<<"ENTER YOUR ROW SIZE "<<endl;
    cin>>row;
    

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);

        }
        cout<<endl;

    }

    return 0;
}