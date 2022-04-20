// for n = 5
//     1 --- 
//    1 2 --- 
//   1   3--- 
//  1     4 ----- 
// 1 2 3 4 5 ----- 

#include<iostream>
using namespace std;
int main()
{ 
    int n = 5;
    int count ;

    for (int i = 1; i <= n; i++)
    {
        count = i-1;
        //first triangle ---space
        for (int k = 1; k <= n-i; k++)
        {
            cout<<" ";
        }
        
        
        for (int j = 1; j <= i; j++)
        {
            
            if(i == n)
            cout<<j<<" ";
            else
            {
                
            }
            

        }
        cout<<endl;

    }
    
    
    return 0;
}

