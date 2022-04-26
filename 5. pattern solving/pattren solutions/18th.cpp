// for n = 5
//     1 --- 
//    121 --- 
//   12321--- 
//  1234321 ----- 
// 123454321----- 

#include<iostream>
using namespace std;
int main()
{ 
    int n = 5;
    int count ;

    for (int i = 1; i <= n; i++)
    {
        count = 0;
        for (int k = 1; k <= n-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout<<++count;
            

        }
        for (int j = 1; j <= i-1; j++)
        {
            
            count--;
            cout<<count;
        }
        cout<<endl;

    }
    
    
    return 0;
}

