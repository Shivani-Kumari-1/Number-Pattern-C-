/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
7 8 9 10
4 5 6
2 3
1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k=1,n=1,row;
    cout<<"Enter number of rows = ";
    cin>>row;
    for(i=1;i<=(2*row)-1;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<" "<<n++;
        }
        if(i>=row)
            n=(n/2)-1;
        if(i<row)
            k++;
        else
            k--;
        cout<<"\n";
    }
    return 0;
}
