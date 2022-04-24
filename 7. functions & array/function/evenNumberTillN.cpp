#include<iostream>
using namespace std;
void printeven(int n )
{
   
  for (int i = 2 ; i <= n; i= i+2)
    {
     cout<<i<<" ";
    }
    
}
int main()
{
int i = 15;
printeven(i);
return 0;
}