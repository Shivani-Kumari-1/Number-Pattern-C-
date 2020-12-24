/*

1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
2 4 6 8
1 3 5
2 4
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
        if(i%2==0)
            k=2;
        else
            k=1;
        for(j=1;j<=i;j++,k+=2)
        {
            cout<<" "<<k;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        if(i%2==0)
            k=2;
        else
            k=1;
        for(j=1;j<=i;j++,k+=2)
        {
            cout<<" "<<k;
        }
        cout<<"\n";
    }
    return 0;
}
