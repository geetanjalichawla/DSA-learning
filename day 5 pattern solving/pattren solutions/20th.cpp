#include<iostream>
using namespace std;
int main()
{
 int n = 5;
 for (int i = 1; i <= n; i++)
 {
     for (int j = i; j <= n; j++)
     {
        if(i == 1)
        {
            cout<<j<<" ";

        }
        else{
            if (j == i || j == n)
            {
               cout<<j<<' ';
            }
            else
            cout<<"  ";

        }
     }
     cout<<endl;
    
 }
 
return 0;
}