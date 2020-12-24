/*

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
4 8 11 13
3 7 10
2 6
1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            cout<<" "<<k;
            k+=n-j;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            cout<<" "<<k;
            k+=n-j;
        }
        cout<<"\n";
    }
    return 0;
}
