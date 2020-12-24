/*

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
1 2 3 4 3 2 1
1 2 3 2 1
1 2 1
1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=1;i<=n;i++)   //i = row //
    {
        for(j=1;j<=i;j++)   //j = column //
        {
            cout<<" "<<j;
        }
        for(k=i-1;k>=1;k--)     //k = decrement //
        {
            cout<<" "<<k;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        for(k=i-1;k>=1;k--)
        {
            cout<<" "<<k;
        }
        cout<<"\n";
    }
    return 0;
}
