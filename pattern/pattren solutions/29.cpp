#include<iostream>
using namespace std;
void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    
}
void space(int n )
{
    for (int i = 0; i < n; i++)
    {
        cout<<" ";
    }
    
}
void printing(int i , int n)
{
     star(i);
        space(n-i);
        space(n-i);
        star(i);
       cout<< endl;
}
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
       printing(i,n);
        
     }
    for (int i = n-1; i >= 1; i--) // to copy 5th line use i = n
    {
       printing(i,n);
        
     }
    
return 0;
}