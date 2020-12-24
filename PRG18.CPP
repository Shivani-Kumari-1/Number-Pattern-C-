/*

5 5 5 5 5
4 5 5 5 5
3 4 5 5 5
2 3 4 5 5
1 2 3 4 5
2 3 4 5 5
3 4 5 5 5
4 5 5 5 5
5 5 5 5 5

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        k=i;
        for(j=1;j<=n;j++)
        {
            if(k<=n)
            {
                cout<<" "<<k;
            }
            else
            {
                cout<<" "<<n;
            }
            k++;
        }
        cout<<"\n";
    }
    for(i=2;i<=n;i++)
    {
        k=i;
        for(j=1;j<=n;j++)
        {
            if(k<=n)
            {
                cout<<" "<<k;
            }
            else
            {
                cout<<" "<<n;
            }
            k++;
        }
        cout<<"\n";
    }
    return 0;
}
