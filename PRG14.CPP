/*

1
1 2
1 2 3
1 2 3 2
1 2 3 2 1
1 2 3 2
1 2 3
1 2
1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j<=(5/2))
            {
                cout<<" "<<j;
            }
            else
            {
                cout<<" "<<5-j+1;
            }
        }
        cout<<"\n";
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j<=(5/2))
            {
                cout<<" "<<j;
            }
            else
            {
                cout<<" "<<5-j+1;
            }
        }
        cout<<"\n";
    }
    return 0;
}
