/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter number = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    for(i=2;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }

    return 0;
}
