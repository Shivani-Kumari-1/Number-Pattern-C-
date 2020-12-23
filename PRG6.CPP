/*

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }

    return 0;
}
