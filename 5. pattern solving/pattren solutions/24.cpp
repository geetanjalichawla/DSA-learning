#include<iostream>
using namespace std;
int main()
{
    int N = 5;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<i;
           if (i!=j)
           {
               cout<<"*";
           }
           
        }
        cout<<endl; 
        
    }
    for (int i = N; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<i;
           if (i!=j)
           {
               cout<<"*";
           }
           
        }
        cout<<endl; 
        
    }

return 0;
}