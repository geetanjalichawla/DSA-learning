#include<iostream>
using namespace std;
void number_square(int n)
{
    for (int i = 1; i < n; i++)
    {
        cout<<i*i<<endl;
    }
    
}
int main()
{
  int n = 34;
number_square(n);

return 0;
}