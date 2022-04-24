#include<iostream>
using namespace std;

//32123
//32223
//32123
//32223
//32123

int main()
{
    int i,j,n;
   
    n = 3;

    //upper loop
    for(i=n;i>1;i--)
    {
        //top left
    for(j=n;j>=1;j--)
    {
        if(j>i)
        cout<<j;
        else
        cout<<i;
    }
         //top right 
    for(j=2;j<=n;j++)
    {
        if(j>i)
        cout<<j;
        else
        cout<<i;
    }
    cout<<endl;
    }


    // bottom
    for(i=1; i<=n; i++)
    {
    //left bottom
    for(j=n;j>=1;j--)
    {
        if(j>i)
        cout<<j;
        else
        cout<<i;
    }
    //right bottom
    for(j=2;j<=n;j++)
    {
        if(j>i)
        cout<<j;
        else
        cout<<i;
    }
    cout<<endl;
    }
    return 0;
 
}