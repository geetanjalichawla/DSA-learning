#include<iostream>
using namespace std;
int main()
{ int n = 3;
cout<<"*"<<endl;
    for (int i = 1; i <= n*2-1; i++)
    {
        if(n>=i){
            cout<<"* ";
        for (int j = 0; j < i;)
        {
            cout<<++j<<" ";
        }
        for (int j = i; j > 1; )
        {
           cout<<--j<<" ";
        }
        cout<<"*"<<endl;} 
    
    else
    {
        cout<<"* ";
        for (int j = i-1; j > 0;)
        {
            cout<<--j<<" ";
        }
        for (int j = i; j < 1; )
        {
           cout<<++j<<" ";
        }
        cout<<"*"<<endl;
     
    }
    
    
    }
    cout<<"*";
return 0;
}