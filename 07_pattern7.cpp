#include<iostream>
using namespace std;

int main()
{
    int row,col;
     cout<<"ENTER YOUR ROW SIZE "<<endl;
    cin>>row;
   

    for(int i=1;i<=row;i++)
    {
        int k=1;
        for(int j=1;j<=i;j++)
        {
          printf("%d ",k);
          k=k+2;

        }
        cout<<endl;
      

    }

    return 0;
}