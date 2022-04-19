#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{ int n = 16;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            if (i == 1) 
            {
                cout<<"*";
            }
            else{
                if( j == 1 || j == n-i+1)
                cout<<"*";
                else
                cout<<" ";
                
            }
            
            
        }
        cout<<endl; 
        
    }
    
    return 0;
}
