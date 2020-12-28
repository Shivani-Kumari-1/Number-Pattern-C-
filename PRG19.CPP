/*

5 4 3 2 1 2 3 4 5
5 4 3 2   2 3 4 5
5 4 3       3 4 5
5 4           4 5
5               5
5 4           4 5
5 4 3       3 4 5
5 4 3 2   2 3 4 5
5 4 3 2 1 2 3 4 5

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
            cout<<j;
        }
        for(k=i*2;k<2*n-1;k++)
        {
            cout<<" ";
        }
        for(j=1+n-i;j<=n;j++)
        {
            if(j!=1)
                {
                    cout<<j;
                }
        }
        cout<<"\n";
    }
    for(i=2;i<=n;i++)
    {
        for(j=n;j>=1+n-i;j--)
        {
            cout<<j;
        }
        for(k=i*2;k<2*n-1;k++)
        {
            cout<<" ";
        }
        for(j=1+n-i;j<=n;j++)
        {
            if(j!=1)
                {
                    cout<<j;
                }
        }
        cout<<"\n";
    }
    return 0;
}
