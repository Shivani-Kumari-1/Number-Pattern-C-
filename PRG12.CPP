/*

1
2 2
3 3 3
2 2 2 2
1 1 1 1 1
2 2 2 2
3 3 3
2 2
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
            if(i<=(5/2))
            {
                cout<<" "<<i;
            }
            else
            {
                cout<<" "<<5-i+1;
            }
        }
        cout<<"\n";
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(i<=(5/2))
            {
                cout<<" "<<i;
            }
            else
            {
                cout<<" "<<5-i+1;
            }
        }
        cout<<"\n";
    }
    return 0;
}
