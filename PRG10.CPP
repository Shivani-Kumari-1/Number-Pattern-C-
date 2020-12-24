/*

9
7 9
5 7 9
3 5 7 9
1 3 5 7 9
3 5 7 9
5 7 9
7 9
9

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=9;i>=1;i-=2)
    {
        for(j=i;j<=9;j+=2)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    for(i=3;i<=9;i+=2)
    {
        for(j=i;j<=9;j+=2)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
