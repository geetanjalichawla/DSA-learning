#include<iostream>
using namespace std;
int factorial (int n)
{
    int ans = 1;
   
    for (int i = 2; i <=n && i ; i++)
    {
        ans *= i;
    }
    return ans;
    
}
int main()
{
int n =3;
cout<<factorial(n);
return 0;
}