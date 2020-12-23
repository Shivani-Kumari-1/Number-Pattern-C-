/*

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
2 2 2 2
3 3 3
4 4
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
        for(j=i;j<=n;j++)
        {
            cout<<" "<<i;
        }
        cout<<"\n";
    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<" "<<i;
        }
        cout<<"\n";
    }

    return 0;
}
