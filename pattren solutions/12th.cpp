// hollow full pyramid
// 1. space in every case will be row - 1 times 
// 2 .and if the row number is 1 or n mwe have to treat diffrently 
// 3. in 2 to n-1 part we have do someting
// hollow pyramid invert
#include<iostream>
using namespace std;
int main()
{ int n = 16;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0 ; j < n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == n) 
            {
                cout<<"* ";
            }
            else{
                if( j == 1 || j == i)
                cout<<"* ";
                else
                cout<<"  ";
                
            }
            
            
        }
        cout<<endl; 
        
    }
    
    return 0;
}





