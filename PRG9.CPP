/*

1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
4 3 2 1
1 2 3
2 1
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
        if(i%2==1)
            k=1;
        else
            k=i;
        for(j=1;j<=i;j++)
        {
            cout<<" "<<k;
        if(i%2==1)
            k++;
        else
            k--;
        }
        cout<<"\n";
    }
    for(i=n-1;i>=1;i--)
    {
        if(i%2==1)
            k=1;
        else
            k=i;
        for(j=1;j<=i;j++)
        {
            cout<<" "<<k;
            if(i%2==1)
                k++;
            else
                k--;
        }
        cout<<"\n";
    }

    return 0;
}
