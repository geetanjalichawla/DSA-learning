#include<iostream>
using namespace std;
void dharmesh(int k)
{
    cout<<"dharmesh interger"<<k<<endl;
    k ++;
   
}
void suresh(int o)
{
    cout<<"suresh interger"<<o<<endl;
    o ++;
   dharmesh(o);
}
void ramesh(int m)
{
    cout<<"ramesh interger"<<m<<endl;
    m ++;
    suresh(m);
}
int main()
{
    int n = 20;
    ramesh(n);
    cout<<"vapisi ho gai main me"<<n<<endl;
return 0;
}