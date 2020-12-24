/*

    0 1 2 3 4 3 2 1 0

0   *
1   * 1 *
1   * 1 2 1 *
3   * 1 2 3 2 1 *
4   * 1 2 3 4 3 2 1 *
3   * 1 2 3 2 1 *
2   * 1 2 1 *
1   * 1 *
0   *

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter Number = ";
    cin>>n;
    //.......................................//
    cout<<" "<<"*"<<endl;   //for UPPER STAR //
    //.......................................//
    for(i=1;i<=n;i++)   //i = row //
    {
        cout<<" "<<"*";
        for(j=1;j<=i;j++)   //for first layer//
        {
            cout<<" "<<j;
        }
        for(k=i-1;k>=1;k--)     //k = decrement layer //
        {
            cout<<" "<<k;
        }
        cout<<" "<<"*"<<"\n";
    }
    for(i=n-1;i>=1;i--)   //i = row //
    {
        cout<<" "<<"*";
        for(j=1;j<=i;j++)   //for first layer//
        {
            cout<<" "<<j;
        }
        for(k=i-1;k>=1;k--)     //k = decrement layer //
        {
            cout<<" "<<k;
        }
        cout<<" "<<"*"<<"\n";
    }
    //.......................................//
    cout<<" "<<"*"<<endl;   //for BOTTOM STAR //
    //.......................................//
    return 0;
}
