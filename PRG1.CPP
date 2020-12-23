/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
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
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }

    return 0;
}
