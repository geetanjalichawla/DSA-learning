#include<iostream>
using namespace std;
int main()
{
    int n =5;
    for (int i = 1; i <= n; i++)
    {
      
       for (int j = 1; j <= n-i+4; j++)
       {
           cout<<"*";
       }
       for (int j = 1; j <= i; j++)
       {
           cout<<i<<"*";
       }
        for (int j = 1; j <= n-i+3; j++)
       {
           cout<<"*";
       }
      
       cout<<endl;
    }
    

return 0;
}