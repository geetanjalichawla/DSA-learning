#include<iostream>
using namespace std;
int main()
{
    int N = 5;
    int c = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           cout<<c++;
           if (i!=j)
           {
               cout<<"*";
           }
           
        }
        cout<<endl; 
        
    }
    int a = c;
    for (int i = N; i >= 1; i--)
    {
        c = a-(i);
        a = c;
        for (int j = 1; j <= i; j++)
        {
           cout<<c++;
           if (i!=j)
           {
               cout<<"*";
           }
           
        }
        cout<<endl; 
        
    }

return 0;
}