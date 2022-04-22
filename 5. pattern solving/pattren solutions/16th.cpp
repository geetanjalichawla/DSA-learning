// hollow triangle with j number 1234

#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
          if (i == n)
          {
              cout<<k<<" ";
          }
          else {if (k == 1 || k == i)
           {
               cout<<k<<" ";
           }
           else 
           cout<<"  ";}
           
        }
        cout<<endl;
    }
    
    return 0;
}
