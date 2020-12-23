/*

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
4 5 6 7
3 4 5
2 3
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
        for(j=1;j<=i;j++,k++)
        {
            cout<<" "<<k;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        k=i;
        for(j=i;j>=1;j--,k++)
        {
            cout<<" "<<k;
        }
        cout<<"\n";
    }

    return 0;
}
