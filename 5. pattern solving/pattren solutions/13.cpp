// hollow pyramid invert
#include<iostream>
using namespace std;
int main()
{ int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0 ; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n-i+1; j++)
        {
            if (i == 1) 
            {
                cout<<"* ";
            }
            else{
                if( j == 1 || j == n-i+1)
                cout<<"* ";
                else
                cout<<"  ";
                
            }
            
            
        }
        cout<<endl; 
        
    }
    
    return 0;
}
