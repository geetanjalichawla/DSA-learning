/*
3
44
555
6666
555
44
3
*/

#include<iostream>
using namespace std;
int main()
{
    int  n = 4;
    int ref = 2;
    for (int i = 1; i <= n; i++)
    {++ref;
        for (int j = 1; j <= i; j++)
        {
            cout<<ref;
        }
        cout<<endl;
    }
    for (int i = n-1; i >= 1; i--)
    {   ref--; 
        for (int j = 0; j < i; j++)
        {
            cout<<ref;
        }
    
        cout<<endl;
    }
    

return 0;
}