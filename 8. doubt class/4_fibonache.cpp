
// this is what i did 
#include<iostream>
using namespace std;
void printFib(int n)
{
  

int a = 0;
int b = 1;
int c = 0;
for (int i = 0; i < n; i++)
{
     cout << a << " ";
     c = b+a;
     a = b; 
     b = c;
}

}
int main()
{
printFib(10);
return 0;
}