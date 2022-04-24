#include<iostream>
using namespace std;
int factorial(int n)
{
    int ans = 1;
    for (int i = 2 ; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
    
}

//function for ncr
int ncr(int n , int r)
{
return (factorial(n) / ( factorial(n-r)* factorial(r)));
}

int main()
{
    int n = 5;
for (int i = 0; i <= n; i++)
{

  for (int j = 0; j <= i; j++)
  {
      cout<<ncr(i,j)<<" ";
  }
  cout<<endl;
}

return 0;
}