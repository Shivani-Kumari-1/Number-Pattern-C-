/*

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
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
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }

    return 0;
}
