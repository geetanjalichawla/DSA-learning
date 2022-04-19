#include<iostream>
using namespace std;

main (){int f = 3;
int ans = 1;
for (int i = 1; i <= f; i++)
{
  ans = ans*i;
}

cout<<"factorial of "<<f<<" is:  "<<ans<<endl;
return 0;
}