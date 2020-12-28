/*

      4
    3 3 3
  2 2 2 2 2
1 1 1 1 1 1 1
  2 2 2 2 2
    3 3 3
      4

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1+n-i;j--)
        {
            cout<<" "<<" ";
        }
        for(k=i*2;k<2*n-1;k++)
        {
            cout<<" "<<i;
        }
        for(j=1+n-i;j<=n;j++)
        {
            if(j!=1)
                {
                    cout<<" "<<" ";
                }
        }
        cout<<"\n";
    }
    for(i=2;i<=n;i++)
    {
        for(j=n;j>=1+n-i;j--)
        {
            cout<<" "<<" ";
        }
        for(k=i*2;k<2*n-1;k++)
        {
            cout<<" "<<i;
        }
        for(j=1+n-i;j<=n;j++)
        {
            if(j!=1)
                {
                    cout<<" "<<" ";
                }
        }
        cout<<"\n";
    }
    return 0;
}
